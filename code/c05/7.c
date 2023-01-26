int ft_is_prime(int nb)
{
    int i;
    i = 2;
    while(i < nb)
    {
        if(nb % i == 0)
            return(0);
        else
            return(1);
        i++;
    }
    if(nb == 1 || nb == 0)
            return(0);
}
#include <stdio.h>
int main()
{
    printf("%d",ft_is_prime(15));
}