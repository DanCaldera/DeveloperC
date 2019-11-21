#include <stdio.h>
#include <string.h>

int main()
{
    char * nombre = "Daniel";

    printf("Mi nombre es: %s tiene %ld caracteres\n", nombre, strlen(nombre));
}