int	ft_atoi(const char *str)
{
    int sign = 1;
    int res = 0;

    while (*str <= 32)
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    if (*str == '+' || *str == '-')
        return 0;
    while (*str)
    {
        res = (res * 10) + *str - 48;
        str++;
    }
    return (res * sign);
}