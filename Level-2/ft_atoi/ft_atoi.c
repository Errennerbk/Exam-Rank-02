int ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;

    while (*str == 32 || (*str <= 13 && *str >= 9))
        str++;
    if (*str == '-')
    {
        sign = sign * -1;
        str++;
    }
    else if (*str == '+')
        str++;
    if(*str == '+' || *str == '-')
        return (0);
    while (*str <= 57 && *str >= 48)
    {
        res = (res * 10) + *str - 48;
        str++;
    }
    return (res * sign);
}