/*
** EPITECH PROJECT, 2022
** MY_STRNCPY.c
** File description:
** description file
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int size = 0;
    while (src[size] != '\0') {
        size++;
    }
    int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > size) {
        dest[i] = '\0';
    }
    return dest;
}
