#include <unistd.h>

void aff_a (char* str);

int main (int argc, char* argv[])
{
	if (argc >= 2)
	{
		aff_a (argv[1]);
	}
	else
	{
		write(1, "a2", 2);
	}
	return 0;
}

void aff_a (char* str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

