/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** bomb.c
*/
#include "../include/my.h"

void sprite_bomb(background *back)
{
    sfVector2f vec_ter;
    vec_ter.x = 1000;
    vec_ter.y = 763;
    back->t_bomb = sfTexture_createFromFile("./obs/bomb.png", NULL);
    back->s_bomb = sfSprite_create();
    sfSprite_setPosition(back->s_bomb, vec_ter);
}

void sprite_bread(background *back)
{
    sfVector2f vec_bis;
    vec_bis.x = 1920;
    vec_bis.y = 755;
    back->t_obs = sfTexture_createFromFile("./obs/candy_obs.png", NULL);
    back->s_obs = sfSprite_create();
    sfSprite_setPosition(back->s_obs, vec_bis);

    sprite_bomb(back);
}

void game_over(background *back, t_cat *cat)
{
    sfVector2f vec_gv;
    static int i = 0;
    vec_gv.x = 420;
    vec_gv.y = 0;
    back->t_gv = sfTexture_createFromFile("./obs/gameover.png", NULL);
    back->s_gv = sfSprite_create();
    sfSprite_setTexture(back->s_gv, back->t_gv, sfTrue);
    sfSprite_setPosition(back->s_gv, vec_gv);
    sfRenderWindow_drawSprite(back->window, back->s_gv, NULL);
    if (i == 0)
        cat->rect.left = 0;
    i++;
    if (cat->rect.left >= 2168 - 271)
        sfRenderWindow_close(back->window);
}

void analys_event(background *back, t_cat *cat)
{
    sfVector2f move1 = sfSprite_getPosition(cat->s_cat);
    sfVector2f move2 = sfSprite_getPosition(back->s_bomb);
    sfVector2f move3 = sfSprite_getPosition(back->s_obs);

    if ((move1.x + 271 / 2 >= move2.x && move1.x + 272 / 2 < move2.x + 128) &&
    move1.y + 237 > move2.y) {
        game_over(back, cat);
    }
    if ((move1.x + 271 / 2 >= move3.x && move1.x + 272 / 2 < move3.x + 133) &&
    move1.y + 237 > move3.y) {
        game_over(back, cat);
    }
}
