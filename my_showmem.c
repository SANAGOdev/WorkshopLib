/*
** EPITECH PROJECT, 2022
** my_showmem.c
** File description:
** my_showmem.c
*/

static void display_content_char(char const *first_char, int i, int char_left);
static void display_content_hexa(char const *first_char, int i, int char_left);
static void display_row(char const *first_char, int char_left);

int my_showmem(char const *str, int size)
{
	for (int i = 0; i < size; i += 16) {
		display_row(str + i, size - i);
		my_putchar('\n');
	}
	return (0);
}

void display_row(char const *first_char, int char_left)
{
	my_putnbr_base((long)first_char, "0123456789abcdef");
	my_putstr(":  ");
	display_content_hexa(first_char, 0, char_left);
	display_content_char(first_char, 0, char_left);
}

void display_content_hexa(char const *first_char, int i, int char_left)
{
	for (; i < 16 && i <= char_left; i++) {
		if (first_char[i] < 16)
			my_putchar('0');
		my_putnbr_base(first_char[i], "0123456789abcdef");
		if (i % 2 != 0)
			my_putchar(' ');
	}
	for (; i < 16; i++) {
		my_putstr("  ");
		if (i % 2 != 0)
			my_putchar(' ');
	}
}

void display_content_char(char const *first_char, int i, int char_left)
{
	for (; i < 16 && i <= char_left; i++) {
		if (first_char[i] < 32 || first_char[i] > 126)
			my_putchar('.');
		else
			my_putchar(first_char[i]);
	}
}
