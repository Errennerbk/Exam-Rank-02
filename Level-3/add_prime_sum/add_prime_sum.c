
 #include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] <= 32)
        i++;
    if(str[i] == '-')
        sign = -1;
    while (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
        res = res * 10 + str[i++] - 48;
    return (res * sign);
}

void print (int c)
{
    if (c > 9)
        print(c / 10);
    write (1, &"0123456789"[c % 10], 1);
}

int ft_prime(int n)
{
    int i = 2;

    while(n > i)
    {
        if ((n % i ) == 0)
            return 0;
        else 
            i++;
    }
    return 1;
}
int main (int ac, char **av)
{
    int i = 0;
    int num;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        if (num <= 0)
        {
            write (1, "0", 1);
            return 0;
        }
        i = 2;
        int res = 0;
        while (num >= i)
        {
            if (ft_prime(i))
                res += i;
            i++;
        }
        print(res);
    }
    write (1, "\n", 1);
}