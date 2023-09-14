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

#include <stdio.h>

int	ft_is_prime(int nb);
/*
int main ()
{
	printf("1 is prime, 0 is not prime: %d\n", ft_is_prime(-73));
	
	return 0;
}
*/

int	ft_is_prime(int nb)
{
	int	x;

	if (nb > 0)
	{
		x = nb / 2;
		if (nb == 1 || nb == 0)
		{
			return (0);
		}
		while (x != 1)
		{
			if ((nb % x) == 0)
			{
				return (0);
			}
			else
				x--;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}

/*{
	int number;

	number = 2;
	while (number != 9)
	{
		if (nb % number == 0)
			return (0);
		else 
		{
			ft_is_prime(nb);
		}
		number++;
	}
	return (1);
}*/
