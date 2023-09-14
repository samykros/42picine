#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2);

int main ()
{
	char s1[5] = "Hello";
	char s2[5];
	ft_strcpy(s1, s2);
	write(1, s2, 5);
}

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
