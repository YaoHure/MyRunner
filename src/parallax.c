/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** parallax.c
*/
#include "../include/my.h"

void move(sfVector2f move1, sfSprite *lala, float x)
{
    sfVector2f vect = {x, 0};
    sfVector2f vecfly1 = {0, 0};

    move1 = sfSprite_getPosition(lala);
    sfSprite_move(lala, vect);
    if (move1.x <= -1920)
        sfSprite_setPosition(lala, vecfly1);
}

void move_sprite(background *back)
{
    sfVector2f vecfly2 = {2000, 755};
    sfVector2f vecfly3 = {2000, 763};
    sfVector2f move3;
    sfVector2f move2;

    move(back->move1, back->s_rocks, -0.10);
    move(back->move1, back->s_clouds, -0.20);
    move(back->move1, back->s_trees, -0.60);
    move(back->move1, back->s_ground, -1.50);
    move(back->move1, back->s_cake, -1.30);
    move(back->move1, back->s_obs, -1.20);
    move(back->move1, back->s_bomb, -1.20);

    move2 = sfSprite_getPosition(back->s_obs);
    if (move2.x <= 0)
        sfSprite_setPosition(back->s_obs, vecfly2);
    move3 = sfSprite_getPosition(back->s_bomb);
    if (move3.x <= 0)
        sfSprite_setPosition(back->s_bomb, vecfly3);
}
