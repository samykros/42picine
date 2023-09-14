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
void	binary(int nbr, char *result);
void	hexadecimal(int nbr, char *result);
void	octal(int nbr, char *result);
void	ft_rev_char_tab(char *tab, int size);
void	ft_putnbr_base(int nbr, char *base);

int main ()
{
	ft_putnbr_base(8, "0123456789");
	return 0;
}
*/
void	ft_rev_char_tab(char *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

int	ft_strcmp (char *s1, char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else 
			return (0);
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putstr_int(int *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	binary(int nbr, char *result)
{
	int	i;

	i = 0;
	if (nbr == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return;
	}

	while (nbr != 0)
	{
		result[i] = (nbr % 2) + '0';
		nbr = nbr / 2;
		i++;
	}
	result[i] = '\0';

	ft_rev_char_tab(result, i);
	ft_putstr(result);
}

void	hexadecimal(int nbr, char *result)
{
	int	i;
	int	remainder;

	i = 0;
	if (nbr == 0)
	{
		result[0] = '0';
		result[1] = '\0';
	return;
	}

	while (nbr != 0)
	{
		remainder = nbr % 16;
	if (remainder < 10)
	{
		result[i] = remainder + '0';
	}
	else
	{
		result[i] = remainder - 10 + 'A';
	}
	nbr = nbr / 16;
	i++;
	}
	result[i] = '\0';
	ft_rev_char_tab(result, i);
	ft_putstr(result);
}


void	octal(int nbr, char *result)
{
	int	i;
	int	remainder;

	i = 0;
	if (nbr == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return;
	}
	while (nbr != 0)
	{
		remainder = nbr % 8;
		result[i] = remainder + '0';
		nbr = nbr / 8;
		i++;
	}
	result[i] = '\0';
	ft_rev_char_tab(result, i);
	ft_putstr(result);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[100];
	int		*nb;

	result = {0};
	if (ft_strcmp(base, "0123456789") == 0)
	{
		nb = &nbr;
		ft_putstr_int(nb);
	}
	else if (ft_strcmp(base, "01") == 0)
	{
		binary(nbr, result);
	}
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)
	{
		hexadecimal(nbr, result);
	}
	else if (ft_strcmp(base, "poneyvif") == 0)
	{
		octal(nbr, result);
	}
	else
		write(1, "err\n", 4);
}
