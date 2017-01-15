#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	main(int argc, char **argv)
{
	int i = 0;
	
	if (argc > 2)
		ft_putchar('a');
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
				ft_putchar('a');
			i++;
		}
	}	

	ft_putchar('\n');
}
