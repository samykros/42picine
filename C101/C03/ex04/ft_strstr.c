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
char *ft_strstr(char *str, char *to_find);
int ft_strlen(char *str);

int main()
{
	char *str = "Hi fellow piciner.";
	char *to_find = "in";
	char *resultado = str;

	while ((resultado = ft_strstr(resultado, to_find)) != NULL)
	{
		printf("Found '%s' at position %ld\n", to_find, resultado - str);
		resultado += ft_strlen(to_find);
	}
	return 0;
}
*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	length;
	int	i;
	int	j;

	length = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (j < length && str[i + j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break;
				j++;
			}
			if (j == length)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
