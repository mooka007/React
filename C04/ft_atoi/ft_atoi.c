#include <stdio.h>
#include <stdlib.h>

 
int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int signe;
		nbr = 0;
		i = 0;
		signe = 0;

		while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r') ||
			(str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
				i++;
		while (str[i] == '+' || str[i] == '-');
		{
			if (str[i] == '-')
			signe++;
			i++;
  		}

		while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		{
			nbr = nbr * 10 + str[i] - '0';
			i++;
		}
		
		if (signe % 2 == 1)
		
			return (-nbr);
		
		else
			return (nbr);
}
 
int main()
{
		printf("ft_atoi: %d\n", ft_atoi("123451635436"));
		printf("atoi: %d\n", atoi("123456"));
		printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
		printf("atoi: %d\n", atoi("12Three45678"));
		printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
		printf("atoi: %d\n", atoi("Hello World!"));
		printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
		printf("atoi: %d\n", atoi("+42 BLAH!"));
		printf("ft_atoi: %d\n", ft_atoi("-42"));
		printf("atoi: %d\n", atoi("-42"));
		printf("ft_atoi: %d\n", ft_atoi("     +42"));
		printf("atoi: %d\n", atoi("     +42"));
		printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
		printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
															    
		 return 0;}
