/*
** EPITECH PROJECT, 2022
** my strncat
** File description:
** my strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int d_len = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[d_len + i] = src[i];
    }
    dest[d_len + i] = '\0';
    return dest;
}
