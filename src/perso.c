/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** perso.c
*/
#include "../include/my.h"

void run_cat(t_cat *cat)
{
    if (cat->rect.left < 2168 - 271) {
        cat->rect.left += 271;
    }
    else
        cat->rect.left = 0;
}

void vector(background *back, t_cat *cat)
{
    //sfVector2f sfSprite_getOrigin(const sfSprite* s_cat);
    sfSprite_setTextureRect(cat->s_cat, cat->rect);
    sfRenderWindow_drawSprite(back->window, cat->s_cat, NULL);
}

void catmove_rect(background *back, t_cat *cat, t_score *sc)
{
    sfTime time = sfClock_getElapsedTime(cat->clock);
    cat->rect.width = 271;
    cat->rect.height = 237;
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.08) {
        run_cat(cat);
        sfClock_restart(cat->clock);
        sc->count_score++;
    }
    vector(back, cat);
}

void cat_jump(t_cat *cat, t_song *sg)
{
    static int a = 0;
    sfVector2f vec = {330, 500};
    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfSprite_setPosition(cat->s_cat, vec);
        sfSound_play(sg->jump_song);
        cat->rect.top = 474 - 237;
    }
    else
        cat->rect.top = 0;
    a++;
}
