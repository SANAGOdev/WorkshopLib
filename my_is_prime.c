/*
** EPITECH PROJECT, 2022
** my is prime
** File description:
** my is prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}
