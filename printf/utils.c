#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int(int nb)
{
	long n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
		ft_int(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_str(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		ft_putchar(s1[i]);
		i++;
	}
}

void	ft_hex(unsigned int nb)
{
	if (nb >= 16)
		ft_hex(nb / 16);
	if (nb % 16 < 10)
		ft_putchar(n % 16 + '0');
	 else
		ft_putchar(n % 16 + 'W');
}

int		main(int ac, char **av)
{
	ft_int(atoi(av[1]));
	ft_putchar('\n');
	ft_hex(atoi(av[1]));
	ft_putchar('\n');
	ft_str(av[1]);
	ft_putchar('\n');
}
