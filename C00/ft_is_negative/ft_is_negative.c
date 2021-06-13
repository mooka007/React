#include <unistd.h>
void	ft_is_negative(int n)
{
	char i;
	if (n < 0)
	{
		i = 'N';
	}
	else
	{
		i = 'P';
	}
	write(1, &i, 1);
}
int main(void)
{
	ft_is_negative(-5);
	return 0;
}
