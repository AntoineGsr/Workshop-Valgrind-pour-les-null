/*
** EPITECH PROJECT, 2022
** workshop.h
** File description:
** workshop
*/

#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char ex01_array[11][15] = {{"**************"}, {"*            *"}, {"*Must have to*"}, {"*   Printf   *"},
                    {"* This array *"} ,{"* WithoutAny *"}, {"*  Valgrind  *"}, {"*   Error!   *"},
                    {"*            *"}, {"**************"}};

size_t my_strlen(char *str)
{
    return (*str ? my_strlen(++str) + 1 : 0);
}

static char *my_putstr(char *str)
{
    char *print = malloc(sizeof(char) * strlen(str) + 1);

    print = str;

    write(1, print, my_strlen(str));
    return (print);
}

typedef struct list_t list_t;
struct list_t {
    char *buff;
    list_t *next;
};
