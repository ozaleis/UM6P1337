#include <unistd.h>

void ft_if_negative(int n)
{
    char a = (n < 0) ? 'N' ; 'P';
    write(1, &a, 1);
}
