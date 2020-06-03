/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct sf_name {
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *s_sky;
    sfTexture *t_sky;
    sfSprite *s_rocks;
    sfTexture *t_rocks;
    sfSprite *s_clouds;
    sfTexture *t_clouds;
    sfSprite *s_trees;
    sfTexture *t_trees;
    sfSprite *s_cake;
    sfTexture *t_cake;
    sfSprite *s_ground;
    sfTexture *t_ground;
    sfSprite *s_obs;
    sfTexture *t_obs;
    sfSprite *s_bomb;
    sfTexture *t_bomb;
    sfSprite *s_gv;
    sfTexture *t_gv;
    sfVector2f move1;
    sfVector2f move2;
}background;

typedef struct sf_score {
    sfText *score;
    sfFont *poli;
    sfText *score_nb;
    int count_score;
}t_score;

typedef struct sf_cat {
    sfSprite *s_cat;
    sfTexture *t_cat;
    sfClock *clock;
    sfIntRect rect;
}t_cat;

typedef struct sf_song {
    sfMusic* song;
    sfSound* jump_song;
}t_song;

#endif
