#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char c;
    c = 48;
    if (c != 58)
    { 
        while (c != 58)
        {
            ft_putchar(c);
            c++;
        }
        
    }
    
}

int main(void)
{
    ft_print_numbers();
}