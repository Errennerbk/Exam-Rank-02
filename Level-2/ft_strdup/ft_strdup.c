#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *temp;
    int i = 0;
    int j = 0;

    while (src[i])
        i++;
    temp = malloc (sizeof(int) * i + 1);
    if (!temp)
        return NULL;
    while (src[j])
    {
        temp [j] = src[j];
        j++;
    }
    temp[j] = '\0';
    return (temp);
}