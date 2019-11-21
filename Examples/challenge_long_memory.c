#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char * largestString = "";
    for(int i=1; i<argc; i++)
    {
        printf("Argument %d = %s\n", i, argv[i]);
        if(strlen(argv[i])>strlen(largestString))
        {
            largestString=argv[i];
        }
    }
    printf("The largest argument is %s\n",largestString);

    return 0;
}