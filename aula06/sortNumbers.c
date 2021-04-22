#include <stdio.h>
#include <stdlib.h>


/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man qsort
*/

int compareInts(const void *px1, const void *px2)
{
    int x1 = *((int *)px1);
    int x2 = *((int *)px2);
    return(x1 < x2 ? -1 : x1 == x2 ? 0 : 1);
}

int main(int argc, char *argv[])
{
    int i, numSize,val;
    int *numbers;
    FILE *fp = NULL;

    numSize=0;
    fp = fopen(argv[1], "r");
    
    if (fp == NULL)
    {    
        printf("Cannot open %s\n", argv[1]);
        return EXIT_FAILURE;
    }
    while(fscanf(fp, "%d",&val)==1){
        numSize++;
    }
    fclose(fp);
    
    /* Memory allocation for all the numbers in the arguments */
    numbers = (int *) malloc(sizeof(int) * numSize);
    

    fp = fopen(argv[1], "r");
    i=0;
    if (fp == NULL)
    {    
        printf("Cannot open %s\n", argv[1]);
        return EXIT_FAILURE;
    }


    while(fscanf(fp, "%d",&val)==1)
    {
        numbers[i] = val;
        i++;
    }
    fclose(fp);
    /* Storing the arguments in the "array" numbers */
    

    /* void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); 
         The qsort() function sorts an array with nmemb elements of size size.*/
    qsort(numbers, numSize, sizeof(int), compareInts);

    /* Printing the sorted numbers */
    printf("%d sorted numbers: \n" ,numSize);
    for(i = 0 ; i < numSize ; i++)
    {
       printf("%d\n", numbers[i]);
    }

    return EXIT_SUCCESS;
}
