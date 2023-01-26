#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabe(void)
{
    char c;
    c = 122;
    if(c != 96)
    {
        while (c != 96)
        {
            ft_putchar(c);
            c--;
        }
        
    }
}

int main()
{
    ft_print_reverse_alphabe();
}