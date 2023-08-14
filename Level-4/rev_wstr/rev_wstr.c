#include <unistd.h>
#include <stdlib.h>

void print(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **res;

    res = (char **)malloc(sizeof(char *) * 1000);
    while (str[i])
    {
        k = 0;
        res[j] = (char *)malloc(sizeof(char) * 1000);
        while (str[i] && str[i] <= 32)
            i++;
        while (str[i] && str[i] > 32)
            res[j][k++] = str[i++];
        res[j][k] = '\0';
        j++;
    }
    res[j] = 0;
    return (res);
}

int main (int ac, char **av)
{
    int i = 0;
    char **words;

    if (ac == 2)
    {
        words = ft_split(av[1]);
        while (words[i])
            i++;
        i--;
        while (i >= 0)
        {
            print(words[i]);
            if (i > 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
}