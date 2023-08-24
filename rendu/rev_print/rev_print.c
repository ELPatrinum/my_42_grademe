#include <unistd.h>

void	ft_rev_print(char *str)
{
	if (*str)
	{
		ft_rev_print(str + 1);
		write(1, str, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_print(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return 0;
}
