#include <unistd.h>

int check (char c, char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int check2(char c, char *s, int a)
{
    int i = 0;

    while (a > i)
    {
        if (s[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main (int ac, char **av)
{
    int i = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (check(av[1][i], av[2]) == 1)
            {
                if (check2(av[1][i], av[1], i) == 0)
                {
                    write(1, &av[1][i], 1);
                }
            }
            i++;
        }
    }
    write (1, "\n", 1);
}