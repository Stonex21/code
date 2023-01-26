#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int x;
    int y;
    
    i = 0;
    while(str[i] != 0)
    {
        if(str[i] == to_find[0])
        {
            y = i;
            x = 0;
            while(to_find[x] != 0 && (str[y] == to_find[x]))
            {
                x++;
                y++;
                if(to_find[x] == 0)
                    return(str + i);
            }
        }
        i++;
    }
    return 0;
}

int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "piscine";
	printf("%p", ft_strstr(str, find));
}
