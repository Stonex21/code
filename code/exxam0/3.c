#include <unistd.h>

void	ft_print_numbers(void)
{
    write(1,"123456789",9);
}

int main()
{
    ft_print_numbers();
}