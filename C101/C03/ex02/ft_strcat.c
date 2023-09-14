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
int ft_strlen(char *str);
char *ft_strcat(char *dest, char *src);

int main()
{
    char src[20] = "fellow piciner :D";
    char dest[100] = "Hi ";

    ft_strcat(dest, src);
    printf("%s\n", dest);

    return 0;
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;

	dest_len = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[dest_len] = *src;
		src++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
