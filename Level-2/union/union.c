#include <unistd.h>

int main (int ac, char **av)
{
    int i = 1;
    int j = 0;
    int cont[255] = {0};

    if (ac == 3)
    {
        while (i < 3)
        {
            j = 0;
            while (av[i][j])
            {
                if(cont[(int)av[i][j]] != 1)
                {
                    cont[(int)av[i][j]] = 1;
                    write(1, &av[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}