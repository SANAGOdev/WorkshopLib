/*
** EPITECH PROJECT, 2022
** my get nbr
** File description:
** my get nbr
*/

int strlength(char const *str)
{
    int length = 0;

    while(str[length] != 0)
        length++;
    return length;
}

int is_safe_add(int a, int b) {
    return ((0x7FFFFFFF - b) / 10 >= a);
}

int my_getnbr(char const *str)
{
    int result = 0;
    int sign = 1;
    int length = strlength(str);

    for(int i = 0; i < length; i++) {
        if(str[i] >= 0x30 && str[i] <= 0x39 ||
                str[i] == '+' || str[i] == '-') {
            switch(str[i]) {
                case '+':
                    sign = 1;
                    break;
                case '-':
                    sign = 0;
                    break;
                default:
                    if(!is_safe_add(result, str[i]-'0'))
                        return 0;
                    result = result * 0xA + (str[i] - '0');
                    break;
            };
        } else {
            break;
        }
    }
    return (sign ? result : -result);
}
