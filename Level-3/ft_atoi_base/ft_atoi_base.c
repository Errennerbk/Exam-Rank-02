int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res += str[i] - 48;
        else if (str[i] >= 'a' && str[i] <= 'z')
            res += str[i] - 87;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            res += str[i] - 55;
        i++;
    }
    return (sign * res);
}

#include <stdio.h>
int main ()
{
    const char a[] = "azc";

    printf("%d", ft_atoi_base(a, 16));
}