/*
** EPITECH PROJECT, 2022
** MY_REVSTR.c
** File description:
** reverse string function
*/

#include "my.h"

char *my_revstr (char *str)
{
    int i = 1;
    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (i != -1) {
        my_putchar(str[i]);
        i--;
    }
}
