#include <unistd.h>

int		is_printed(char printed[127], int nb_printed, char c)
{
	int i;

	i = 0;
	while (i <= nb_printed)
	{
		if (printed[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *first, char *second)
{
	int		i;
	char	printed[127];
	int		nb_printed;

	i = 0;
	nb_printed = 0;

	while (first[i])
	{
		if (!is_printed(printed, nb_printed, first[i]))
		{
			printed[nb_printed] = first[i];
			write(1, &first[i], 1);
			nb_printed++;
		}
		i++;
	}
	i = 0;
	while (second[i])
	{
		if (!is_printed(printed, nb_printed, second[i]))
		{
			printed[nb_printed] = second[i];
			write(1, &second[i], 1);
			nb_printed++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 2);
	return (1);
}
