#include <stdio.h>

//La fonction strcat() ajoute la chaîne src à la fin de la chaîne dest en écrasant le caractère nul (« \0 ») à la fin de dest, puis en ajoutant un nouveau caractère nul final. Les chaînes ne doivent pas se chevaucher, et la chaîne dest doit être assez grande pour accueillir le résultat

char	*ft_strcat(char *dest, char *src)
{
	int i = 0; 
	while (dest[i])
		i++;
	while(*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[10] = "ana ";
       	char src[] = " M9awad :D";

	ft_strcat(dest, src);
	printf("%s", dest);
	return 0;
}	
