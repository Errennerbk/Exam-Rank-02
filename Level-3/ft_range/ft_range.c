#include <stdlib.h>

int ft_abs(int e)
{
    if (e < 0)
        return (-e);
    return (e);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int *res;

    res = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
    
    while (start < end)
    {
        res[i] = start;
        start++;
        i++;
    }
    while (start > end)
    {
        res[i] = start;
        start--;
        i++;
    }
    res[i] = start;
    return (res);
}
#include <stdio.h>
int main()
{
    int *rrange = ft_range(3, 5);
    int i = 0;
    while(i <= ft_abs(3 - 5))
    {
        printf("%d ", rrange[i]);
        i++;
    }
}