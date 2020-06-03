/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** song.c
*/
#include "../include/my.h"

void game_sound(t_song *sg)
{
//    sg->song = sfMusic_createFromFile("audio_runner/run.ogg");
//    sfMusic_play(sg->song);
    sfSoundBuffer *bf = sfSoundBuffer_createFromFile("audio_runner/jump.ogg");
    sg->jump_song = sfSound_create();
    sfSound_setBuffer(sg->jump_song, bf);
}
