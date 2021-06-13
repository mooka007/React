#include <stdlib.h>
#include <stdio.h>

int   *ft_range(int min, int max)
{
		int *str;
		int i;
		int len;

		    if (min >= max)
	 	    {
		        return (NULL);
		    }
		i = 0;
		len = max - min;
		str = (int *)malloc(sizeof(min) * len);
		while (i < len)
		{
			str[i] = min + i;
			i++;
		}
		return (str);
}

int	main()
{
	int* res;
	int i;
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	return 0;
}

