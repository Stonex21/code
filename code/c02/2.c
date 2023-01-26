#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    
    while(src[i] != 0 && n > 0)
    {
        dest[i] = src[i];
        i++;
        n--;
    }
    dest[i] = 0;
    return(dest);
}
int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";
	//char dest1[] = "World2";

	printf("%s", ft_strncpy(dest, src, 3));
	//printf("\n%s", strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	//printf("\n%s", strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
	//printf("\n%s", strncpy(dest1, src, 7));
}
