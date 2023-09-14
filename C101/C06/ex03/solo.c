#include <unistd.h>
#include <stdio.h>

int ft_strlen (char* str);
int ft_strcmp (char* s1, char* s2);
void ft_sort_params (int argc, char* argv[]);

int main (int argc, char* argv[])
{
	int i = 1;
	
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
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

int ft_strcmp (char* s1, char* s2)
{
	int i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return s1[i] - s2[i];
}

void ft_sort_params (int argc, char* argv[])
{
	char* temp;
	int i = 1;
	int swapped = 1;
	
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < argc - 1)
		{
			while (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}
