#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct
{
    int age;
    double height;
    char name[64];
} Person;

void printPersonInfo(Person *p)
{
    printf("Person: %s, %d, %f\n", p->name, p->age, p->height);
}

int main (int argc, char *argv[])
{

    FILE *fp = NULL;
    int i,n;
    //Person p = {35, 1.65, "xpto"};
    Person p;
    
    /* ALÍNEA B */

    printf("Number of people to save: \n");
    scanf("%d", &n);
    
    /* Validate number of arguments */
    if(argc != 2)
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open the file provided as argument */
    errno = 0;
    fp = fopen(argv[1], "wb");
    if(fp == NULL)
    {
        perror ("Error opening file!");
        return EXIT_FAILURE;
    }

    /* Write 10 itens on a file */
    for(i = 0 ; i < n ; i++)
    {    
        
        printf("Age: \n");
        scanf("%d" ,&p.age);
        printf("Heigh: \n");
        scanf("%lf" ,&p.height);
        printf("Name: \n");
        scanf(" %63[^\n]", p.name);

        
        fwrite(&p, sizeof(Person), 1, fp);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}
