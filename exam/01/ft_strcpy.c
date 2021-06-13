#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i; 
	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return s1;
}
int	main(void)
{
	char s1[] = "allo"; 
	char s2[] = " hello ";

	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return 0;
}
