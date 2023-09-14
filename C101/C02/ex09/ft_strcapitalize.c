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
#include <unistd.h>
/*
char	*ft_strcapitalize(char *str);

int	main ()
{
	char input[] = "salut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(input);
	printf("%s\n", input);
	return (0);
}
*/
int	is_alpha_numeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*original;

	original = str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
	str++;
	while (*str != '\0')
	{
		if ((!is_alpha_numeric(*(str - 1))) && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - 32;
		}
		if ((is_alpha_numeric(*(str - 1))) && (*str >= 'A' && *str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	return (original);
}
