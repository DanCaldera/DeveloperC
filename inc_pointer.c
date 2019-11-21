#include <stdio.h>

int main()
{
    int n=5;
    int *pi = &n;
    char c = 'A';
    char *pc = &c;

    printf("Antes pi=%p, y Antes pc=%p\n", pi, pc);
    pi++;
    pc++;
    printf("Despues pi=%p, y Despues pc=%p\n", pi, pc);

    return 0;
}