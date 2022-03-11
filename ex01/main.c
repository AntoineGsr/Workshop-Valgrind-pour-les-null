/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/workshop_display.h"

static void display_array(const char *str)
{
    char *new = malloc(sizeof(char) * strlen(str));

    strcat(new, str);
    free(new);
    for (int a = 0; a < strlen(new); a++)
        printf("%c", new[a]);
    printf("\n");
    free(new);
}

int main(const int ac, const char **av)
{
    display_ex01();
    for (int b = 0; b < 17; b++)
        display_array(ex01_array[b]);
    return (0);
}