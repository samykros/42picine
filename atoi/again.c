#include <stdio.h>

void ft_atoi(char* str);

int main ()
{

}

void ft_atoi(char* str)
{
	int i = 0;

	while (str[i] >= 32 || str[i] <= 126)
	{
		i++;
	}
	if (str[i] == '-')
	{
		write(1, '-', 1);
		i++;
	}
	else
	{
		
	}
}
