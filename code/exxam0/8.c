#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    if(s1[i] == s2[i])
        return(0);
    if(s1[i] > s2[i])
        return(1);
    if(s1[i] < s2[i])
        return(-1);
}
#include <stdio.h>
int main()
{
    char s1[] = "1";
    char s2[] = "9";
    printf("%d",ft_strcmp(s1,s2));
}