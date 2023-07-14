#include <unistd.h>

void ft_print_comb(void)
{
    char a[] = "0123456789";

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                write(1, &a[i], 1);
                write(1, &a[j], 1);
                write(1, &a[k], 1);

                if (i != 7 || j != 8 || k != 9)
                {
                    write(1, ", ", 2);
                }
            }
        }
    }
}
