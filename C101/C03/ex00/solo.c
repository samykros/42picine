#include <stdio.h>

int ft_strcmp (char* str1, char* str2);

int main ()
{
	char* str1 = "abc";
	char* str2 = "aac";
	
	printf("%d\n", ft_strcmp(str1, str2));
	
	return 0;
}

int ft_strcmp (char* str1, char* str2)
{
	int i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
		{
			return (str1[i] - str2[i]);
		}
	}
	
	return (str1[i] - str2[i]);
}
