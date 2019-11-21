#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char NAME[100];
typedef int AGE;

struct PERSON
{
    NAME name;
    AGE age;
};

void fill_person_data(struct PERSON * person, const char * name, int age)
{
    if(strlen(name)<100)
    {
        strcpy(person->name, name);
    }
    person->age = age; 

    // Same as

    /*
    if(strlen(name)<100)
    {
        strcpy((*person).name, name);
    }
    (*person).age = age; 
    */
    
}

int main(int argc, const char * argv[])
{
    struct PERSON person;
    
    if(argc<3) 
    {
        printf("Indique nombre y edad\n");
        return 1;
    }

    fill_person_data(&person, argv[1], atoi(argv[2]));

    printf("Nombre = %s,Age = %d\n", person.name, person.age);

    return 0;
}