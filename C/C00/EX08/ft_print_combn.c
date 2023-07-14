#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn_recursive(int n, int index, int current, int *array)
{
    if (index == n)
    {
        for (int i = 0; i < n; i++)
            ft_putchar(array[i] + '0');
        
        if (array[0] < 10 - n)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        
        return;
    }
    
    for (int i = current; i <= 9; i++)
    {
        array[index] = i;
        ft_print_combn_recursive(n, index + 1, i + 1, array);
    }
}

void ft_print_combn(int n)
{
    int array[n];
    ft_print_combn_recursive(n, 0, 0, array);
}
