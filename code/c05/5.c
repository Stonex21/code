#include <unistd.h>

int ft_fibonacci(int index)
{
    if(index < 0)
        return(-1);
    if(index < 2)
        return(index);
    //if(index > 1)
    return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1)); 
}
#include <stdio.h>
int main()
{
   printf("%d",ft_fibonacci(7));
}