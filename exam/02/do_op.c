#include <stdio.h>
#include <stdlib.h>

int	add(int a, int b)
{
	return(a + b);
}

int	min(int a, int b)
{
	return(a - b);
}

int	div2(int a, int b)
{
	return(a / b);
}

int	mod(int a, int b)
{
	return(a % b);
}


int	main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
			printf("%d", add(atoi(argv[1]), atoi(argv[3])));

		if(argv[2][0] == '-')
			printf("%d", min(atoi(argv[1]), atoi(argv[3])));

		if(argv[2][0] == '*')
		 printf("%d", atoi(argv[1]) *  atoi(argv[3]));


		if(argv[2][0] == '/')
			printf("%d", div2(atoi(argv[1]), atoi(argv[3])));

		if(argv[2][0] == '%')
			printf("%d", mod(atoi(argv[1]), atoi(argv[3])));
			
	
	}
	printf("\n");
	return 0;
	}

