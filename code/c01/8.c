#include <unistd.h>
#include <stdio.h>

int ft_rev_int_tab(int *tab, int size)
{
    int swap;
    int i;

    i = 0;
    while(size > i)
    {
        swap = tab[i];
        tab[i] = tab[size];      
        tab[size] = swap;
        size--; 
        i++;
    }
}

int main(void)
{
   int tab[4] = {0, 1, 2, 3};
	int size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3]); 
	return (0);
}