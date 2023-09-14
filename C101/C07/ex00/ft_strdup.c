/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:02:28 by spascual          #+#    #+#             */
/*   Updated: 2023/09/08 11:19:11 by spascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_strcpy (char* dest, char* src)
{
	int	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}

char *ft_strdup(char *src)
{
	char	*dest;
	int	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * i);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

#include <stdio.h>
int	main() 
{
	char	src[] = "Hello";
	char	*dest = "Hi"; // Estoy cambiando donde aputna dest, de forma que dest no apunta a Hi, sino que apunta a src

	printf("%s\n", dest);
	dest = ft_strdup(src);
	printf("%s", dest); // How I'm I printing Hello if dest is string literal
	free(dest);
	
	return 0;
}
