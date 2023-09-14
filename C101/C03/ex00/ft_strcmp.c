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

/* Looks alphabeticaly, if difference < 0, str1 
first. If first letters ==, looks second... */
/*
int ft_strcmp(char *s1, char *s2);

int main ()
{
	char str1[] = "Hello";
	char str2[] = "Horld";

	int difference = ft_strcmp(str1, str2);

	if (difference == 0)
	{
		printf("Las cadenas son iguales.\n");
	}
	else
	{
		printf("Diferencia: %d\n", difference);
		printf("Str1: %s\n", str1);
		printf("Str2: %s\n", str2);
	}

	return 0;
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
