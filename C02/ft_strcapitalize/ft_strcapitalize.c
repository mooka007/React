#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{ 
		if((i == 0 || str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-' ) && (str[i] >= 'a' && str[i] <= 'z'))
				{
					str[i] -= 32;
				}
				else if (!( i == 0 || str[i - 1] == ' ') && (str[i] >='A' && str[i] <= 'Z'))
				{
					str += 32;
				}
				i++;
	}
	return (str);
	}
int	main()
{
char str[] = "abce Abvs +atrc asd-asd";

printf("%s", ft_strcapitalize(str));
return 0;
}
