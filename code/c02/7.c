#include <stdio.h>
#include <unistd.h>

char *strcapitalize(char *str)
{
	int ind;

	ind = 0;
	while(str[ind] != 0)
	{
		if(str[ind] >= 'A' && str[ind] <= 'Z')
			str[ind] += 32;
		ind++;
	}
	ind = 0;
	if(str[ind] >= 'a' && str[ind] <= 'z')
		str[ind] -= 32;
	while(str[ind] != 0)
	{
		if((str[ind-1] <= 32 || str[ind-1] == '+' || str[ind-1] == '-' || str[ind-1] > 128) && (str[ind] >= 'a' && str[ind] <= 'z'))
			str[ind] -= 32;
		ind++;
	}
	return (str);
}

int main()
{
	char str[] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; cinquante+et+un";
	printf("%s", strcapitalize(str));
	return 0;
}
