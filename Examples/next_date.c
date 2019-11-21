#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[])
{
    time_t oneDay = 24*60*60, today = time(NULL), nextDate;

    nextDate = today + oneDay*atoi(argv[1]);

    printf("Un dia tiene %ld segundos\n", oneDay);
    printf("Faltan %ld segundos para la siguiente fecha\n", oneDay*atoi(argv[1]));
    //printf("%ld\n", nextDate);
    printf("%s\n", ctime(&nextDate));

    return 0;
}