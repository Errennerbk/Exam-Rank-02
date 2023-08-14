int	ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;

    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
    {
        str++;
        sign = -1;
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