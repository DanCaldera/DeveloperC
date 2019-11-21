#include <stdio.h>

int main()
{
    char * name = "Daniel";

    printf("Nombre es %s, (%p)\n", name, name);

    for(int i=0; i<6; i++)
    {
        printf("name[%d](%p) = %c - %c\n", i, name+i, *(name+i), name[i]);
    }

    return 0;
}