#include <unistd.h>

void print (int n)
{
    if (n > 9)
        print (n / 10);
    write (1, &"0123456789"[n % 10], 1);
}

int main (int ac, char **av)
{
    (void)av;
    if (ac > 1)
        print(ac - 1);
    else
        write(1, "0", 1);
    write (1, "\n", 1);
}