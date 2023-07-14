#include <unistd.h>

void ft_print_comb2(void)
{
    int i;
    int j;

    for (i = 0; i <= 98; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            int first_digit_1 = i / 10;
            int second_digit_1 = i % 10;
            int first_digit_2 = j / 10;
            int second_digit_2 = j % 10;

            char output[8];
            output[0] = first_digit_1 + '0';
            output[1] = second_digit_1 + '0';
            output[2] = ' ';
            output[3] = first_digit_2 + '0';
            output[4] = second_digit_2 + '0';
            output[5] = ',';
            output[6] = ' ';
            output[7] = '\0';

            write(1, output, 7);
        }
    }
}
