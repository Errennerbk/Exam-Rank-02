// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int i = 0;
//     int sayac;

//     if (ac == 2)
//     {
//         while (av[1][i])
//         {
//             if(av[1][i] >= 'a' && av[1][i] <= 'z')
//                 sayac = av[1][i] - 96;
//             else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
//                 sayac = av[1][i] - 64;
//             while (sayac)
//             {
//                 write(1, &av[1][i], 1);
//                 sayac--;
//             }
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }
#include <unistd.h>

int main( int ac, char **av)
{
    int i;
    i = 0;
    int count;

    if (ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96;
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 64;
            while (count)
            {
                write(1, &av[1][i], 1);
                count--;
            }
        i++;
        }
    }
    write(1, "\n", 1);
}