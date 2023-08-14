#include <stdlib.h>
#include <stdio.h>

int main (int ac, char **av)
{
    int num1 = 0;
    int num2 = 0;

    if (ac == 4)
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[3]);

        if (av[2][0] == '*')
            printf("%d", num1 * num2);
        else if (av[2][0] == '/')
            printf("%d", num1 / num2);
        else if (av[2][0] == '+')
            printf("%d", num1 + num2);
        else if (av[2][0] == '-')
            printf("%d", num1 - num2);
        else if (av[2][0] == '%')
            printf("%d", num1 % num2);
    }
    printf("\n");
}