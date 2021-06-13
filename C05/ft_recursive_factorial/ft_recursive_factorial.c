//Recursion makes program elegant. However, if performance is vital, use loops instead as recursion is usually much slower.
//
//That being said, recursion is an important concept. It is frequently used in data structure and algorithms. For example, it is common to use recursion in problems such as tree traversal.
//
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return 0;
	}
	if ( nb == 0 )
	{
		return 1; 
	}
	return ( nb * ft_recursive_factorial(nb - 1));
}
int	main()
{
	printf("%d", ft_recursive_factorial(5));
	return 0;
}
