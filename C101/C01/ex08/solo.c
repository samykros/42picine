#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_print_tab(int *tab, int size);

int main ()
{
    int arr[] = {5, 3, 9, 1, 6, 8};
    
    printf("Antes de ordenar: ");
    ft_print_tab(arr, 6);

    ft_sort_int_tab(arr, 6);

    printf("Después de ordenar: ");
    ft_print_tab(arr, 6);
    return (0);
}

void	ft_print_tab(int *tab, int size)
{
	int i = 0;
	
	while (i < (size - 1))
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int swapped = 1;
	
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < (size -1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

