#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int x;

    i = 0;
    x = 0;
    while(dest[x] != 0)
    {
        x++;
    }
    while(src[i] != 0)
    {
        dest[x + i] = src[i];
        i++;
    }
    dest[x + i] = 0;
    return(i + x);
}

int main()
{
    char src[] = "kitaplık";
    char dest[] = "masa";
    int size = 16;
    printf("%d", ft_strlcat(src,dest,size));
}