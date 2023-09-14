/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:19:30 by spascual          #+#    #+#             */
/*   Updated: 2023/08/27 12:19:39 by spascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/*
void ft_sort_int_tab(int *tab, int size);
void ft_print_tab(int *tab, int size);

int main ()
{
    int arr[] = {5, 3, 9, 1, 6, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Antes de ordenar: ");
    ft_print_tab(arr, size);

    ft_sort_int_tab(arr, size);

    printf("Después de ordenar: ");
    ft_print_tab(arr, size);
    return (0);
}

void	ft_print_tab(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1) 
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
