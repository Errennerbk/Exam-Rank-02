#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **res;

    while (str[i] && str[i] <= 32)
        i++;
    res = (char **)malloc(sizeof(char) * 256);
    while (str[i])
    {
        k = 0;
        res[j] = (char *)malloc(sizeof(char) * 4096);
        while (str[i] && str[i] <= 32)
            i++;
        while (str[i] && str[i] > 32)
            res[j][k++] = str[i++];
        res[j][k] = '\0';
        while (str[i] && str[i] <= 32)
            i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}

#include <stdio.h>
int main ()
{
    char str[] = "     AkjhZ zLKIJz      , 23y";
    char** words = ft_split(str);
    int i = 0;
    while(words[i] != NULL)
    {
        printf("%s ", words[i]);
        i++;
    }
}