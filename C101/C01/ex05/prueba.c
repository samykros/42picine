#include <unistd.h>

void	ft_putstr(char *str);

int main ()
{
	char *str;
	
	str = "Hi fellow piciner";
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
