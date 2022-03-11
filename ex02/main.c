/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/workshop_display.h"

static const char *encrypted_string(const char *str, int size)
{
    char *cesar = malloc(sizeof(char) * size);

    cesar = memfrob(str, size);
    return (cesar);
}

int main(const int ac, const char **av)
{
    char *tmp = NULL;
    char *str = "sE_\nLEDN\n^BO\nLFKM";

    tmp = encrypted_string(str, strlen(str));
    printf("%s\n", tmp);
    free(tmp);
    free(str);
    return (0);
}
