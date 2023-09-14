/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:19:30 by spascual          #+#    #+#             */
/*   Updated: 2023/08/28 14:36:30 by spascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int a = 4;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);
    
    printf("Division: %d\n", a);
    printf("Rest: %d\n", b);
    
    return 0;
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp_2;

	temp = *a / *b;
	temp_2 = *a % *b;
	*a = temp;
	*b = temp_2;
}
