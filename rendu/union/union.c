#include <unistd.h>

int check_before(int indx, char *str)
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

int ft_strlen(char *str)
{
        int i = 0;
        while (str[i])
        {
                i++;
        }
        return i;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int x = ft_strlen(av[1]) + ft_strlen(av[2]);
        char output[x + 1];
        int s = 0;
        int f = 0;
        int j = 0;

        while (av[1][s])
        {
		output[j] = av[1][s];
		s++;
		j++;
        }
	while (av[2][f])
	{
		output[j] = av[2][f];
		f++;
		j++;
	}
        output[j] = '\0';
        int l = 0;
        while (output[l] != '\0')
        {
            if (!check_before(l, output))
                write(1, &output[l], 1);
            l++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
    return 0;
}

