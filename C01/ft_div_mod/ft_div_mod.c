#include <stdio.h>
#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}

int	main(void)
{
	int i = 10;
	int j = 4;
	int *div_i;
	int *mod_j;

	div_i = &i;
	mod_j = &j;
	ft_div_mod(i, j, div_i, mod_j);
	printf("div = %d\nmod = %d\n", *div_i, *mod_j);
	return 0;
}
