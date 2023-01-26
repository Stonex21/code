#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int b;
    int c;

    i = 0;
    b = 1;
    c = 0;
    while (str[i++] != 0)
    {
        if (str[i] == '-')
            b *= -1;
        while (str[i] >= '0' && str[i] <= '9')
        {
            c = ((c * 10) + (str[i] - 48));
            i++;
            if(str[i] > '9' || str[i] < '0')
                return(b*c);
        }
    }
}

int main()
{
    char str[] = "   ----+-+14775ab662";
    printf("%d",ft_atoi(str));
}