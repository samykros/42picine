#include <unistd.h>

int main (int argc, char* argv[])
{
	if (argc >= 2)
	{
		int i = 1;
		while (argv[i])
		{
			i++;
		}
		i--;
		int j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
	}
	
	return 0;
}
