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

            char op[8];
            op[0] = a1 + '0';
            op[1] = b1 + '0';
            op[2] = ' ';
            op[3] = a2 + '0';
            op[4] = b2 + '0';
            op[5] = ',';
            op[6] = ' ';
            op[7] = '\0';

            write(1, op, 7);
        }
    }
}
