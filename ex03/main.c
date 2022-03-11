/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/workshop_display.h"

static list_t *create_new_node(list_t *data, const char *av)
{
    list_t *tmp = data;
    list_t *new = malloc(sizeof(list_t));

    if (!new)
        return NULL;
    new->buff = my_memset_char(strlen(av) + 1);
    if (!new->buff)
        return NULL;
    strcpy(new->buff, av);
    if (!tmp)
        return (new);
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = new;
    return (data);
}

static list_t *list_constructor(const int ac, const char **av)
{
    list_t *data = NULL;

    for (int i = 1; i < ac; i++) {
        data = create_new_node(data, av[i]);
        if (!data)
            return NULL;
    }
    return (data);
}

static void list_destructor(list_t *data)
{
    list_t *tmp = NULL;

    if (!data)
        return;
    for (; data->next;) {
        tmp = data->next->next;
        free(data->next->buff);
        data->next = tmp;
    }
    free(data);
}

static void list_display(list_t *data)
{
    list_t *tmp = data;

    if (!data)
        return;
    for (; tmp; tmp = tmp->next) {
        printf("%s\n", tmp->buff);
        free(tmp->buff);
    }
}

int main(const int ac, const char **av)
{
    display_ex03(ac);
    list_t *data = list_constructor(ac, av);

    list_display(data);
    //Call the destructor list function, and be careful about datas you will free(?);
    //list_destructor(data);
    return (0);
}