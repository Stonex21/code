#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *i)
{
    int x;

    x = 0;
    while( i[x] != 0)
        x++;
    return(x);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int x;
    
    x = 0;
    i = 0;
    while(src[i] != 0 && size != 0)
    {     
        dest[x] = src[i];
        x++;
        i++;
        size--;
    }
    dest[x + 1] = '\0';

    return(ft_strlen(dest));
}

int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
