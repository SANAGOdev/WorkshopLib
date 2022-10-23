/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** my_str_isupper.c
*/

int my_str_isupper(char const *str)
{
	if (str[0] == '\0') {
        return 1;
    }
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < 'A' || str[i] > 'Z') {
            return 0;
        }
	}
	return 1;
}
