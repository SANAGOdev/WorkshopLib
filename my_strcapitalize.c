/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** my_strcapitalize.c
*/

static void uppercase_if_letter(char *str, int pos);
static void lowercase_if_letter(char *str, int pos);
static int is_letter_or_digit(char *str, int pos);

char *my_strcapitalize(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (is_letter_or_digit(str, i - 1))
			lowercase_if_letter(str, i);
		else
			uppercase_if_letter(str, i);
	}
	return (str);
}

int is_letter_or_digit(char *str, int pos)
{
	if (pos == -1)
		return (0);
	if ((str[pos] >= '0' && str[pos] <= '9') \
|| (str[pos] >= 'A' && str[pos] <= 'Z') \
|| (str[pos] >= 'a' && str[pos] <= 'z'))
		return (1);
	return (0);
}

void lowercase_if_letter(char *str, int pos)
{
	if (str[pos] >= 'A' && str[pos] <= 'Z')
		str[pos] += 32;
}

void uppercase_if_letter(char *str, int pos)
{
	if (str[pos] >= 'a' && str[pos] <= 'z')
		str[pos] -= 32;
}
