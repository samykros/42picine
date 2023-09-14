#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char *src = "hey"; // string literal
    char dest[100] = "Ho ";

    ft_strlcat(dest, src, 100);
    printf("%s\n", dest);

    return 0;
}

int	ft_strlen (char* str)
{
	int i = 0;
	
	while (str[i])
	{
		i++;
	}
	return i;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int dest_len = ft_strlen(dest);
	unsigned int n = 0;
	
	while (src[i] != '\0' && n < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
		n++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
char* str[6] = "string";
char* str = "string";
*/
