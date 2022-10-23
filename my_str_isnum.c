/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const *str)
{
	if (str[0] == '\0') {
        return 0;
    }
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-') {
            return 0;
        }
	}
	return 1;
}
