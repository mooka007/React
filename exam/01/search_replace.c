#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char c;

	if( argc == 4)
	{
		i = 0;
		while(argv[1][i])
		{
			c = argv[1][i];
			if(argv[1][i] == argv[2][0])
				c = argv[3][0];

			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
