#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int temp = 0;
    int len = 0;
    char *res;

    if (nbr == -2147483648)
        return ("-2147483648\0");
    temp = nbr;
    if (nbr <= 0)
        len++;
    while(temp)
    {
        temp /= 10;
        len++;
    }
    res = (char *)malloc(sizeof(char)* len + 1);
    if (!res)
        return NULL;
    if (nbr == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        res[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (res);
}