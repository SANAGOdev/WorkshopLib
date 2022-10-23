/*
** EPITECH PROJECT, 2022
** my_strlowcase.c
** File description:
** my_strlowcase.c
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
	    if (str[i] >= 'a' && str[i] <= 'z') {
		    str[i] += 32;
        }
    }
	return str;
}
