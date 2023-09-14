#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main ()
{
	int tab[3] = {1, 2, 3};
	int *ptr = tab;

	ft_rev_int_tab(ptr, 3);
	printf("Reversed vector: %d %d %d", tab[0], tab[1], tab[2]);
	return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;
	int temp;
	
	while (end > start)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		
		end--;
		start++;
	}
}
