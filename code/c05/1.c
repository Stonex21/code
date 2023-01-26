#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;

    i = 0;
    while(nb > 0)
    {
        i *= nb;
        nb--;
    }
    if(nb < 0)
        return(0);
    return(i);
}

int main()
{
    int nb;

    nb = 2;
    printf("%d",ft_iterative_factorial(nb));
}