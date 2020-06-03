/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** destroy.c
*/
#include "../include/my.h"

void destroy_image(background *back, t_cat *cat)
{
    sfTexture_destroy(back->t_sky);
    sfSprite_destroy(back->s_sky);
    sfTexture_destroy(back->t_rocks);
    sfSprite_destroy(back->s_rocks);
    sfTexture_destroy(back->t_clouds);
    sfSprite_destroy(back->s_clouds);
    sfTexture_destroy(back->t_trees);
    sfSprite_destroy(back->s_trees);
    sfTexture_destroy(back->t_cake);
    sfSprite_destroy(back->s_cake);
    sfTexture_destroy(back->t_ground);
    sfSprite_destroy(back->s_ground);
    sfSprite_destroy(back->s_obs);
    sfTexture_destroy(back->t_obs);
    sfTexture_destroy(cat->t_cat);
    sfSprite_destroy(cat->s_cat);
    sfClock_destroy(cat->clock);
    sfRenderWindow_destroy(back->window);
}

void destroy_bread(background *back)
{
    sfTexture_destroy(back->t_bomb);
    sfSprite_destroy(back->s_bomb);
}

void destroy_text(t_score *sc)
{
    sfText_destroy(sc->score);
    sfText_destroy(sc->score_nb);
    sfFont_destroy(sc->poli);
}

void destroy_song(t_song *sg)
{
    sfSound_stop(sg->jump_song);
    sfMusic_stop(sg->song);
    sfSound_destroy(sg->jump_song);
    sfMusic_destroy(sg->song);
}
