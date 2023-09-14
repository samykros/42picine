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
/*
int ft_atoi(char *str);

int main ()
{
	char *str = " 	 \n ---+--+1234ab567";
	ft_atoi(str);
	return (0);
}
*/
int	ft_atoi(char *str)
{
	int	x;

	x = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			x++;
		}
		str++;
	}
	if ((x % 2) != 0)
	{
		write(1, "-", 1);
	}
	while (*str >= '0' && *str <= '9')
	{
		write(1, str, 1);
		str++;
	}
	return (*str);
}
