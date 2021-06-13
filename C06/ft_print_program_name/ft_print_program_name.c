//argv est l’adresse d’un tableau qui contient des chaînes (char*).

//argc est un entier qui indique le nombre de chaînes contenues dans le tableau.

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_print_program_name(int argc, char **argv)
{
	ft_putchar(*argv[1]);
	return 0;

}

int	main(int argc, char **argv)
{
	printf("%s\n", argv[1]);
	return 0;
}
