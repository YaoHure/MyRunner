/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** window.c
*/
#include "../include/my.h"

void destroy(background *back, t_cat *cat, t_song *sg, t_score *sc)
{
    destroy_image(back, cat);
    destroy_song(sg);
    destroy_text(sc);
    destroy_bread(back);
}

void render_window(background *back, t_cat *cat, t_score *sc)
{
    draw_background(back, cat, sc);
    analys_event(back, cat);
    sfRenderWindow_display(back->window);
    sfRenderWindow_clear(back->window, sfBlack);
}

void manage_key(background *back, t_cat *cat, t_song *sg)
{
    sfVector2f Vec = {330, 646};

    if (back->event.type == sfEvtKeyPressed)
        cat_jump(cat, sg);
    else if (back->event.type == sfEvtKeyReleased){
        sfSprite_setPosition(cat->s_cat, Vec);
        cat->rect.top = 0;
    }
}

void manage_event(background *back, t_cat *cat, t_song *sg)
{

    if (back->event.type == sfEvtClosed)
        sfRenderWindow_close(back->window);
    manage_key(back, cat, sg);
}

int game(void)
{
    background *back = malloc(sizeof(background));
    t_cat *cat = malloc(sizeof(t_cat));
    t_song *sg = malloc(sizeof(t_song));
    t_score *sc = malloc(sizeof(t_score));
    background_front(back, cat, sg, sc);
    while (sfRenderWindow_isOpen(back->window)) {
        while (sfRenderWindow_pollEvent(back->window, &back->event)) {
            manage_event(back, cat, sg);
        }
        render_window(back, cat, sc);
    }
    destroy(back, cat, sg, sc);
    return (0);
}
