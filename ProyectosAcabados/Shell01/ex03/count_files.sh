#!/bin/bash

# Utiliza el comando 'find' para buscar tanto archivos como directorios en el directorio actual y sus subdirectorios.
# Luego, utiliza 'wc' para contar las líneas en la salida de 'find', que representa el número de archivos y directorios.

find . | wc -l

# NO SE PORQUE SALE +1 en todo
