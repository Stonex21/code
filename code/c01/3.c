#include<unistd.h>

void ft_swap(int *a, int *b)
{
    int *swap;

    swap = *b;
    *b = *a;
    *a = swap;
}