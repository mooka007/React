#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
int main(void)
{
	int e = 5;
	int f = 10;
	int *eptr = &e;
	int *fptr = &f;

	ft_swap(eptr, fptr);
	printf(" e = %i\n", e);
	printf(" f = %i\n", f);
	return 0;
}
