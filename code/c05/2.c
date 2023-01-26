#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int i;

    i = 1;
    if(nb > 0)
        nb *= ft_recursive_factorial(nb - 1);
    if (nb <= 0)
        return(1);
    return(nb);
}

int main()
{
    int nb;

    nb = 5;
    printf("%d", ft_recursive_factorial(nb));
}