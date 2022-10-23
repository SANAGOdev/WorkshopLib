/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec(int nb, int p)
{
    if (p <= 0) {
        return ((p == 0) ? 1 : 0);
    }
    if (nb == 0) {
        return 0;
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
