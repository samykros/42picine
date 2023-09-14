#include <stdio.h>
#include <unistd.h>

int ft_atoi (char* str);

int main ()
{
	printf("%d", ft_atoi("  ---6756"));
	return 0;
}

int ft_atoi (char* str)
{
	int i = 0;
	int x = 0;
	int result = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			x++;
		}
		i++;
	}
	if ((x % 2) != 0)
	{
		write(1, "err", 3);
		return 0;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return result;
}
