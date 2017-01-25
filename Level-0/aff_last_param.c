#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	main (int argc, char **argv)
{
	int i = 0;
	int ac = argc - 1;

	if (argc >= 2)
		while (argv[ac][i] != '\0')
			ft_putchar(argv[ac][i++]);
	ft_putchar ('\n');
}
