/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    if (nb == 0 || nb == 1) {
        return 0;
    }

    int counter = 1, sqroot = 1, output;
    while (sqroot <= nb) {
        counter++;
        sqroot = counter * counter;
    }
    output = counter - 1;
    
    return output;
}
