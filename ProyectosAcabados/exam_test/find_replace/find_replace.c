#include <stdio.h>

void find_replace(char* src, const char* find, const char* replace);

int main ()
{
	char src[] = "Hi pisciners :D";
	const char find[] = "i";
	const char replace[] = "I";

	find_replace(src, find, replace);

	printf("%s\n", src);

	return 0;
}

void find_replace(char* src, const char* find, const char* replace)
{
	int i = 0;

	while (src[i] != '\0')
	{
		int j = 0;
		int match = 1;

		// Compara si hay una coincidencia de la cadena "find" a partir de la posición actual en "src".
		while (find[j] != '\0')
		{
			if (src[i + j] != find[j])
			{
				match = 0; // No hay coincidencia
				break;
			}
			j++;
		}

		if (match)
		{
			// Si hay una coincidencia, reemplaza la subcadena por la cadena "replace".
			int k = 0;
			while (replace[k] != '\0')
			{
				src[i + k] = replace[k];
				k++;
			}

			// Mueve el índice "i" al final de la cadena reemplazada.
			i = i + k;
		}
		else
		{
			i++;
		}
	}
}

