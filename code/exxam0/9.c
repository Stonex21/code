#include <unistd.h>

char *ft_strrev(char *str)
{
    int i;
    int x;
    char c;

    i = 0;
    x = 0;
    while(str[i] != 0)
        i++;
    while(i > x)
    {
        c = str[i];
        str[i] = str[x];
        str[x] = c;
        i--;
        x++;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char s[] = "alparslan";
    printf("%s",ft_strrev(s));
}