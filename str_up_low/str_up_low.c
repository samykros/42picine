#include <stdio.h>

void lowup (char* str);

int main ()
{
	char str[] = "stRiNg"; // Declaré una cadena para pasar como argumento
	lowup(str); // Llamé a la función para modificar la cadena

	printf("Str: %s\n", str); // Imprimí la cadena resultante

	return 0;
}

void lowup (char* str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
}
