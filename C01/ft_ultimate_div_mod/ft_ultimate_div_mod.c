#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int r;
	int s;

	r = *a / *b;
	s = *a % *b;

	*a = r;
	*b = s;
}

int main(void)
{
	int i = 25;
	int j =  5;

	int *iptr = &i;
	int *jptr = &j;

	ft_ultimate_div_mod(iptr, jptr);
	printf("%d\n, %d\n", i, j);
	return 0;
}
