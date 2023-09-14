/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: your_username                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:00:00 by spascual    #+#    #+#             */
/*   Updated: 2023/08/23 18:00:00 by spascual   ###    ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

int main()
{
    ft_putnbr(42); // Llamamos a la función con el número 42
    return (0);
}

void ft_putnbr(int nb)
{
	int nb;
	write(1, &nb, 1);
}
