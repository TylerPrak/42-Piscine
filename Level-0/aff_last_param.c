#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	main (int argc, char **argv)
{
	int i = 0;
	int ac = argc - 1;

	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		while (argv[ac][i] != '\0')
		{
			ft_putchar(argv[ac][i]);
			i++; 
		}	
		ft_putchar ('\n');
	}
}
