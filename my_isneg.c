/*
** EPITECH PROJECT, 2022
** my isneg
** File description:
** my isneg
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }
    else {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}
