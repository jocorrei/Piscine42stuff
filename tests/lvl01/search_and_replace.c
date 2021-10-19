#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str++);
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		while (argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return(0);
}
