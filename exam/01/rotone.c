#include <unistd.h>

void	rotone(char *argv)
{
	int i;
	i = 0;

	while(argv[i])
	{
		if(argv[i] >= 'a' && argv[i] <= 'y')
			argv[i] = argv[i] + 1;
		if(argv[i] >= 'A' && argv[i] <= 'Y')
			argv[i] = argv[i] + 1;
		if(argv[i] == 'z' || argv[i] == 'Z')
			argv[i] = argv[i] - 25;
		
			write(1, &argv[i], 1);
			i++;
	}
}
int	main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
		write(1, "\n", 1);
		return 0;
}
