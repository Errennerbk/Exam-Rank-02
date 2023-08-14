#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
        sign = -1;
    while(str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
        res = (res * 10) + str[i  ++] - 48;
    return (res * sign);
}

void print(int e)
{
    if (e > 15)
        print(e / 16);
    write(1, &"0123456789abcdef"[e % 16], 1);
}

int main (int ac, char **av)
{
    int num;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        print(num);
    }
    write(1, "\n", 1);
}