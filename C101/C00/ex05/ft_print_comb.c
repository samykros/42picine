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

#include <unistd.h>

void	ft_print_comb(void);
int	main() {
	ft_print_comb();
	return 0;
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7') 
	{
		y = x + 1; 
		while (y <= '8') 
		{
			z = y + 1;
			while (z <= '9') 
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
