#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int c;
	c = 0;

	printf(" c equal : %d\n", c);
	ft_ft(&c); // & means adress_of operator
	printf("now c equal : %d", c);
	return 0;
}

