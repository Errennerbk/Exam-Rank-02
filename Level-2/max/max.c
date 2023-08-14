int     max(int* tab, unsigned int len)
{
    unsigned int i;
    int nb;

    if (!tab)
        return 0;
    i = 0;
    nb = tab[i];
    while (i < len)
    {
        if (nb < tab[i])
            nb = tab[i];
        i++;
    }
    return (nb);
}