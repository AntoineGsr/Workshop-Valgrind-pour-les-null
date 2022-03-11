/*
** EPITECH PROJECT, 2022
** workshop_display.h
** File description:
** workshop_display
*/

#pragma once
#include "workshop.h"

void display_ex01(void)
{
    printf("[EX01]\n");
    printf("Be careful about the variable initilization\n");
}

void display_ex02(void)
{
    printf("[EX02]\n");
    my_putstr("You must have to delete the memory leaks\n");
}

void display_ex03(const int ac)
{
    printf("[EX03]\n");
    if (ac < 4) {
        printf("Please, give a minimum of 3 arguments at execution time './three a b c'\n");
        exit(84);
    }
    my_putstr("You must have to free the linked list\nMaybe, you should recode the constructor and be able to display the 'buff' of each node\nGood luck!\n");
}
