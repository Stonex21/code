#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c,1);
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
        write(1,"-2147483648",11);
    if(nb <= 0)
        nb = -1;
    if(nb > 0)
    {
        ft_putnbr((nb % 10) + 48);
        ft_putnbr((nb / 10) + 48);
    }
    ft_putchar(nb);
}
int main()
{
    ft_putnbr(42321);
}