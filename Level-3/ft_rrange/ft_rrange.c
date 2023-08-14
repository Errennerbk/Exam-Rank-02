#include <stdlib.h>

int ft_abs(int e)
{
    if (e < 0)
        return (-e);
    return (e);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *res;

    res = (int *)malloc(sizeof(int) * ft_abs(end - start) + 1);
    while (end > start)
    {
        res[i] = end;
        end--;
        i++;
    }
    while (end < start)
    {
        res[i] = end;
        end++;
        i++;
    }
    res[i] = end;
    return (res);
}
#include <stdio.h>
int main()
{
    int *rrange = ft_rrange(0, -3);
    int i = 0;
    while(i <= ft_abs(0 - -3))
    {
        printf("%d ", rrange[i]);
        i++;
    }
}