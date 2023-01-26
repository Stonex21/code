#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int i;

    i = *b;
    *b = *a;
    *a = i; 
}

#include <stdio.h>
int	main()
{
	int	a;
	int	b;
	
	a = 2;
	b = 3;
	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d", b);
}