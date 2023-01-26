#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (str + i);
		i++;
		a = 0;
	}
	return (0);
}

int	main()
{
	char str[] = "42 1337 Neptwork 2021 piscine Benguerir Khouribga";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));

}