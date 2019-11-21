#include <stdio.h>

int main()
{
    int array[5];
    int i;

    for(i=0; i<5; i++)
    {
        array[i]=i*2;
    }

    for(i=0; i<6; i++)
    {
        printf("array[%d]=%d\n", i, array[i]);
    }

    //Error / warning: array index 6 is past the end of the array (which contains 5 elements) [-Warray-bounds]
    //array[6] = 81;

    return 0;
}