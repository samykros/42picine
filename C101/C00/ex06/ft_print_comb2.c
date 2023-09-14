/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: your_username                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:00:00 by spascual    #+#    #+#             */
/*   Updated: 2023/08/23 18:00:00 by spascual   ###    ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// todas las combinaciones posibles de dos digitos.
#include <unistd.h>

void ft_print_comb2(void);
int main()
{
    ft_print_comb2();
    return (0);
}

void	ft_print_comb2(void)
{
	char	cero;
	char	nine;
	char	cero_2;
	char	nine_2;

	cero_2 = '0';
	while (cero_2 <= '9')
	{
		nine_2 = '0';
		while (nine_2 <= '9')
		{
			cero = '0';
			while (cero <= '9')
			{
				nine = '0';
				while (nine <= '9')
				{
					write(1, &cero_2, 1);
					write(1, &nine_2, 1);
					write(1, " ", 1);
					write(1, &cero, 1);
					write(1, &nine, 1);
					if (!(cero_2 == 9 && nine_2 == 9 && cero == 9 && nine == 9))
					{
						write(1, ", ", 2);
					}
					nine++;
				}
				cero++;
			}
			nine_2++;
		}
		cero_2++;
	}
}
