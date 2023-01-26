#include <unistd.h>

void ft_putchar(char c)
{
    write(1 , &c, 1);
}

void ft_print_comb(void)
{
    int c ;
    int x ;
    int a ;
    a = 0;
    while(a <= 7)
    {
        x = a + 1;
        while(x <= 8)
        {
            c = x + 1;
            while(c <= 9)
            {
                ft_putchar((a % 10) + 48);
                ft_putchar((x % 10) + 48);
                ft_putchar((c % 10) + 48);
                if (a != 7)
                    write(1, ", ", 2);
                c++;    
            }
            x++;  
        }
        a++;
    }
}

int main()
{
    ft_print_comb();
}