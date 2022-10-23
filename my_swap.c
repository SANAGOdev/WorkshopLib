/*
** EPITECH PROJECT, 2022
** my swap
** File description:
** my swap
*/

void my_swap(int *a, int *b)
{
    int a1 = *a;
    int b1 = *b;
    *a = b1;
    *b = a1;
}
