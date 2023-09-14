#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	char* src = "Hola ";
	char* dest = "Ho";
	
	printf("Dest: %u\n", ft_strlcat(dest, src, 7));
	
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
	
	while (dest[dest_len] != '\0' && src[i] != '\0' && n < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
		n++;
	}
	return dest[dest_len];
}
