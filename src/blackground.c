/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** blackground.c
*/

#include "../include/my.h"

void background_front(background *back, t_cat *cat, t_song *sg, t_score *sc)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    back->window = sfRenderWindow_create(video_mode, "My_Runner", sfDefaultStyle
    , NULL);
    back->t_sky = sfTexture_createFromFile("./back1/sky.png", NULL);
    back->s_sky = sfSprite_create();
    back->t_rocks = sfTexture_createFromFile("./back1/rocks.png", NULL);
    back->s_rocks = sfSprite_create();
    back->t_ground = sfTexture_createFromFile("./back1/ground.png", NULL);
    back->s_ground = sfSprite_create();
    back->t_trees = sfTexture_createFromFile("./back1/trees.png", NULL);
    back->s_trees = sfSprite_create();
    back->t_clouds = sfTexture_createFromFile("./back1/clouds.png", NULL);
    back->s_clouds = sfSprite_create();
    back->t_cake = sfTexture_createFromFile("./back1/cake.png", NULL);
    back->s_cake = sfSprite_create();
    sprite_bread(back);
    cat_sprite(cat);
    game_sound(sg);
    text_score(sc);
    text_nb_score(sc);
}

void cat_sprite(t_cat *cat)
{
    sfVector2f vec = {330, 652};
    cat->t_cat = sfTexture_createFromFile("./perso/cat(1).png", NULL);
    cat->clock = sfClock_create();
    cat->s_cat = sfSprite_create();
    sfSprite_setPosition(cat->s_cat, vec);
}

void draw_background(background *back, t_cat *cat, t_score *sc)
{
    sfSprite_setTexture(back->s_sky, back->t_sky, sfTrue);
    sfSprite_setTexture(back->s_rocks, back->t_rocks, sfTrue);
    sfSprite_setTexture(back->s_trees, back->t_trees, sfTrue);
    sfSprite_setTexture(back->s_clouds, back->t_clouds, sfTrue);
    sfSprite_setTexture(back->s_cake, back->t_cake, sfTrue);
    sfSprite_setTexture(back->s_ground, back->t_ground, sfTrue);
    sfSprite_setTexture(cat->s_cat, cat->t_cat, sfTrue);
    sfSprite_setTexture(back->s_obs, back->t_obs, sfTrue);
    sfSprite_setTexture(back->s_bomb, back->t_bomb, sfTrue);
    display_sprite(back, cat, sc);
    sfRenderWindow_drawSprite(back->window, back->s_sky, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_clouds, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_rocks, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_trees, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_cake, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_ground, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_obs, NULL);
    sfRenderWindow_drawSprite(back->window, back->s_bomb, NULL);
    sfRenderWindow_drawSprite(back->window, cat->s_cat, NULL);
    display_text(sc, back);
}

void display_sprite(background *back, t_cat *cat, t_score *sc)
{
    catmove_rect(back, cat, sc);
    move_sprite(back);
}
