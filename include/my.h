/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"

void draw_background(background *back, t_cat *cat, t_score *sc);
void background_front(background *back, t_cat *cat, t_song *sg, t_score *sc);
void cat_sprite(t_cat *cat);
void display_sprite(background *back, t_cat *cat, t_score *sc);

void move(sfVector2f move1, sfSprite *lala, float x);
void move_sprite(background *back);

void game_sound(t_song *sg);
void destroy_sound(t_song *sg);

int my_strcmp(char const *str1, char const *str2);
int my_strlen(char const *str);
char *my_itoa(int nb);
int my_strlen_tree(char const *str);
char *my_revstr(char *str);
int my_first_int_len(int res);

void text_score(t_score *sc);
void text_nb_score(t_score *sc);
void display_text(t_score *sc, background *back);

void destroy_image(background *back, t_cat *cat);
void destroy_text(t_score *sc);
void destroy_song(t_song *sg);
void destroy_bread(background *back);

void run_cat(t_cat *cat);
void vector(background *back, t_cat *cat);
void catmove_rect(background *back, t_cat *cat, t_score *sc);
void cat_jump(t_cat *cat, t_song *sg);

void sprite_bread(background *back);
void sprite_bomb(background *back);
void game_over(background *back, t_cat *cat);
void analys_event(background *back, t_cat *cat);

void manage_key(background *back, t_cat *cat, t_song *sg);
void manage_event(background *back, t_cat *cat, t_song *sg);
void render_window(background *back, t_cat *cat, t_score *sc);
void destroy(background *back, t_cat *cat, t_song *sg, t_score *sc);
int game(void);

void display_creator(void);

#endif
