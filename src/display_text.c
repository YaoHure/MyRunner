/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** display_text.c
*/

#include "../include/my.h"

void text_score(t_score *sc)
{
    sc->score = sfText_create();
    sc->poli = sfFont_createFromFile("./poli/Finished Sympathy.otf");
    sfText_setString(sc->score, "SCORE");
    sfText_setFont(sc->score, sc->poli);
    sfText_setCharacterSize(sc->score, 90);
}

void text_nb_score(t_score *sc)
{
    char *str_score = my_itoa(sc->count_score);

    sc->score_nb = sfText_create();
    sfText_setString(sc->score_nb, str_score);
    sfText_setFont(sc->score_nb, sc->poli);
    sfText_setCharacterSize(sc->score_nb, 90);
    text_score(sc);
}

void display_text(t_score *sc, background *back)
{
    sfVector2f vector_text_score = {300, 0};
    char *str_score = my_itoa(sc->count_score);

    sfText_setString(sc->score_nb, str_score);
    sfRenderWindow_drawText(back->window, sc->score, NULL);
    sfText_setPosition(sc->score_nb, vector_text_score);
    sfRenderWindow_drawText(back->window, sc->score_nb, NULL);

}
