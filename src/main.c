/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** main.c
*/

#include "../include/my.h"

void display_creator(void)
{
    write (1, "Finite runner created with CSFML.\n", 35);
    write (1, "USAGE\n", 7);
    write (1, "./my_runner\n", 12);
    write (1, "\n", 2);
    write (1, "OPTIONS\n", 9);
    write (1, "-h\tprint the usage and quit.\n", 30);
    write (1, "\n", 1);
    write (1, "USER INTERACTIONS\n", 18);
    write (1, "\n", 1);
    write (1, "SPACE_KEY\tjump.\n", 16);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        game();
    }
    else if (ac == 2 && (my_strcmp(av[1], "-h"))) {
        display_creator();
    }
    return (0);
}
