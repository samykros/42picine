#include <unistd.h>

void sort_lenght (char* argv[]);
int ft_strlen (char* str);

int main (int argc, char* argv[])
{
	int i = 1;
	
	if (argc >= 1)
	{
		sort_lenght (argv);
		while (argc > i)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}

int ft_strlen (char* str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

void sort_lenght (char* argv[])
{
	int i = 1;
	int argv_1 = ft_strlen(argv[i]);
	int argv_2 = ft_strlen(argv[i + 1]);
	char* temp;
	
	if (argv_1 > argv_2)
	{
		temp = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = temp;
	}
}
