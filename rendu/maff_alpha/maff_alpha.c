#include <unistd.h>
void	ft_puchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int i = 1;
	char c = 'a';
	while (i < 27)
	{
		if ((i % 2) == 0)
		{
			ft_puchar(c - 32);
		}
		else
			ft_puchar(c);
		c++;
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
