#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    int i;

    i = nb;
    if(power > 1)
    {
        return(i * ft_recursive_power(nb,(power-1)));
    }
    if(power == 0)
        return(1);
    if(power < 0)
        return(0);
    return(i);
}

#include<stdio.h>
int main()
{
    int nb,power;

    nb = 2;
    power = 3;
    printf("%d",ft_recursive_power(nb,power));
}