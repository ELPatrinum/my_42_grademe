#include <unistd.h>

int	check_befor(int indx, char *str)
{
	int i = 0;
	while (i < indx)
	{
		if (str[indx] == str[i])
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int s = 0;
		while (av[1][s])
		{
			if(!check_befor(s, av[1]))
			{
				int d = 0;
				while (av[2][d])
				{
					if (av[1][s] == av[2][d])
					{
						write(1, &av[1][s], 1);
						break;
					}	
					d++;
				}
			}
			s++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return 0;
}
