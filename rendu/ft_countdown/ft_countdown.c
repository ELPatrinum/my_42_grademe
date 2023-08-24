#include <unistd.h>
int main(void)
{
	int i = 0;
	char c = 57;
	while (i < 10)
	{
		write(1, &c, 1);
		i++;
		c--;
	}
	write(1, "\n", 1);
	return 0;
}
