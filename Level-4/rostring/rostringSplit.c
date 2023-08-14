#include <unistd.h>
#include <stdlib.h>

void print(char *s)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] <= 32)
            i++;
        else
            write(1, &s[i], 1);
        i++;
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **res;
    while (str[i] <= 32)
        i++;
    res =(char **)malloc(sizeof(char *) * 1000);
    while (str[i])
    {
        k = 0;
        res[j] = (char *)malloc(sizeof(char) * 1000);
        while (str[i] && str[i] <= 32)
            i++;
        while (str[i] && str[i] > 32)
            res[j][k++] = str[i++];
        res[j][k] = '\0';
        while (str[i] && str[i] <= 32)
            i++;
        j++;
    }
    res[j] = 0;
    return(res);
}

int main (int ac, char **av)
{
    int i = 1;
    char **words;

    if (ac > 1)
    {
        words = ft_split(av[1]);
        while (words[i])
        {
            print(words[i]);
            write(1, " ", 1);
            i++;
        }
        print(words[0]);
    }
    write(1, "\n", 1);
}