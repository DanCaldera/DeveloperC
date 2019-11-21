#include <stdio.h>
#include <string.h>

int main()
{
    char * nombre = "Daniel";
    char * otroNombre = "Brayan";

    printf("Los nombres son %s\n", strcmp(nombre,otroNombre) == 0 ? "iguales" : "distintos");

    return 0;
}