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

/*
	return (*s1 - *s2)
	'H' en str1 es igual a 'H' en str2, por lo que no hay diferencia, y avanzamos al siguiente carácter.
	'e' en str1 no es igual a 'o' en str2, por lo que se devuelve ('e' - 'o'), que es -10.
*/

/*
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char str1[] = "Hello";
    char str2[] = "Horld";
    unsigned int n = 3;

    int difference = ft_strncmp(str1, str2, n);

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
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
