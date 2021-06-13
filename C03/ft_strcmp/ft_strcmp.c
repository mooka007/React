#include <stdio.h>

 // fonction strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure à s2.
 
int 	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while( s1[i] == s2[i] && s1[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int	main()
{
	char str[] = "aaa";
	char t_str[] = "aaa";
	
	printf("%d", ft_strcmp(str,t_str));
       return 0;
}


