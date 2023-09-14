#include <unistd.h>

void lowup (char* str);
int ft_strlen (char* str);

int main ()
{
	char str[] = "hYkNhA";
	lowup(str);
	write(1, str, ft_strlen(str));
	return 0;
}

void lowup (char* str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int ft_strlen (char* str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return i;
}
