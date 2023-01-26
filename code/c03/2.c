#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if(s1 < s2)
			return(-1);
		if(s1 > s2)
			return(1);
		if (s1 == s2)
			return(0);
		i++;
	}

}

int	main(void)
{
	printf("%d", ft_strcmp("selam", "selam0"));
	printf("\n%d", ft_strcmp("naber", "nab"));
	printf("\n%d", ft_strcmp("sen", "senle"));
	printf("\n%d", ft_strcmp("naber", "naber"));
}