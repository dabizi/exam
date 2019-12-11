#include <unistd.h>

int		is_in_list(char printed[127], int nb_printed, char c)
{
	int		i;

	i = 0;
	while (i <= nb_printed)
	{
		if (c == printed[i])
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *first, char *second)
{
	char	printed[127];
	int		i;
	int		j;
	int		nb_printed;

	nb_printed = 0;
	i = 0;
	while (first[i])
	{
		j = 0;
		while (second[j])
		{
			if (!is_in_list(printed, nb_printed, first[i]) &&
			first[i] == second[j])
			{
				printed[nb_printed] = first[i];
				nb_printed++;
				write(1, &first[i], 1);
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 2);
	return (1);
}
