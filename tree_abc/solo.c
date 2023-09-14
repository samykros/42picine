#include <unistd.h>

void abc(void);

int main()
{
    abc();

    return 0;
}

void abc(void)
{
    int i = 0;
    int j;

    while (i < 26)
    {
        j = 0;
        while (j <= i)
        {
            char outputChar = 'a' + i;
            write(STDOUT_FILENO, &outputChar, 1); // Use write instead of printf
            j++;
        }
        char newline = '\n';
        write(STDOUT_FILENO, &newline, 1); // Use write to print a newline
        i++;
    }
}

/*
No pillo

    STDIN_FILENO generalmente se refiere a la entrada estándar, que normalmente es el teclado.
    STDOUT_FILENO generalmente se refiere a la salida estándar, que normalmente es la pantalla.
    STDERR_FILENO generalmente se refiere a la salida de errores estándar, que también es la pantalla pero se usa para mostrar mensajes de error.
    
*/
