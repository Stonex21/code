#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabe(void)
{
    char c;
    c = 97;
    if(c <= 123)
    {
        while (c != 123)
        {
            ft_putchar(c);
            c++;
        }
        
    }
    
}

int main()
{
    ft_print_alphabe();
}
