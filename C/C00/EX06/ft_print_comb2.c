#include <unistd.h>

void ft_print_comb2(void)
{
    int i;
    int j;

    for (i = 0; i <= 98; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            int a1 = i / 10;
            int b1 = i % 10;
            int a2 = j / 10;
            int b2 = j % 10;

            char output[8];
            output[0] = a1 + '0';
            output[1] = b1 + '0';
            output[2] = ' ';
            output[3] = a2 + '0';
            output[4] = b2 + '0';
            output[5] = ',';
            output[6] = ' ';
            output[7] = '\0';

            write(1, output, 7);
        }
    }
}
