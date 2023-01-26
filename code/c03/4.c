#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int x;

    i = 0;
    while(dest[i] != 0)
    {
       i++;
    }
    x = 0;
    while(src[x] != 0 && nb > x)
    {
        dest[i++] = src[x++];
    }
    dest [i] = 0;
    return(dest);
}

int main()
{
    char a[] = "alp";
    char b[] = "arslan";
    printf("%s",ft_strncat(a,b,2));
}