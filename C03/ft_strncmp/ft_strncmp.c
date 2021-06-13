#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int  i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'  && i <= n)
		i++;
	return (s1[i] - s2[i]);
			
}
int main()
{
    int result;

        // comparing strings str1 and str2
	result = ft_strncmp("asdf", "asdf", 4);
	printf("strcmp(s1, s2) = %d\n", result);

	return 0;
	}
