#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return(dest);
}

int	main()
{
	char dest[] = "beautiful";
	//char dest1[] = "beautiful";
	char src[] = "Wo";
	//char src1[] = "Wo";
	printf("%s", ft_strcpy(dest, src));
	//printf("\n%s", strcpy(dest1, src1));
}