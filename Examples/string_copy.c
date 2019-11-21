#include <stdio.h>
#include <string.h>

int main()
{
    char * src = "Daniel";
    char dst[20] = "No veras esto nunca";

    strcpy(dst,src);
    printf("Destino = %s\n", dst);

    return 0;
}