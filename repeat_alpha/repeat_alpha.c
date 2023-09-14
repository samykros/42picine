#include <unistd.h>

void repeat_alpha (char* str);

int	main(int argc, char *argv[])
{
/*

Para printear el primer caracter del parametro

	if (argc == 2)
        	write(1, argv[1], 1);
        else
                write(1, "\n", 1);
*/
        if (argc == 2)
        	repeat_alpha(argv[1]);
        else
                write(1, "\n", 1);

	return (0);
}

void repeat_alpha (char* str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count = str[i] - 96;
			while (count != 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = str[i] - 64;
			while (count != 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
