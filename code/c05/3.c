#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int i;

    i = nb;
    while(power > 1)
    {
        i *= nb;
        power--;
    } 
    if(power == 0)
        return(1);
    if(power < 0)
        return(0);
}
#include <stdio.h>
int main()
{
    int nb, power;

    power = 2;
    nb = 4;
    printf("%d", ft_iterative_power(nb,power));
}