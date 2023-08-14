#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] <= 32)
        i++;
    if(str[i] == '-')
        sign = -1;
    while (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
        res =(res * 10) + str[i++] - 48;
    return(res * sign);
}

void print(int e)
{
    if (e > 9)
        print (e / 10);
    write(1, &"0123456789"[e % 10], 1);
}

int main (int ac, char **av)
{
    int num;
    int i = 1;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        while (i <= 9)
        {
            print(i);
            write (1, " x ", 3);
            print(num);
            write(1, " = ", 3);
            print (num * i);
            i++;
            write(1, "\n", 1);
        }
    }
    
}