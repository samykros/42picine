#include <unistd.h>

void putchar (char c);
void putnbr (int nb);
void fizzbuzz ();

int main ()
{
	fizzbuzz();
	
	return 0;
}

void putchar (char c)
{
	write(1, &c, 1);
}

void putnbr (int nb)
{
	if (nb >= 10)
	{
		putnbr(nb / 10);
	}
	putchar(nb % 10 + '0');
}

void fizzbuzz ()
{
	int i = 1;
	
	while (i <= 100)
	{
		if (i % 4 == 0)
		{
			write(1, "fizz", 4);
			putchar('\n');
		}
		else if (i % 7 == 0)
		{
			write(1, "buzz", 4);
			putchar('\n');
		}
		else
		{
			putnbr(i);
			putchar('\n');
		}
		i++;
	}
}
