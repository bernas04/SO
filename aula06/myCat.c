#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man fopen
 man fgets
*/

#define LINEMAXSIZE 80 /* or other suitable maximum line size */


int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char line [LINEMAXSIZE]; 
    int contador=1;
   

    /* Validate number of arguments */
    if( argc == 1 )
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    /* Open the file provided as argument */
    errno = 0;
    int  contador1=1;
    while (contador != argc)
    {
    
    
    
    fp = fopen(argv[contador], "r");
    if( fp == NULL )
    {
        perror ("Error opening file!");
        return EXIT_FAILURE;
    }

    /* Read all the lines of the file */
    
    while( fgets(line, sizeof(line), fp) != NULL )
    {
         printf("%.2d-> %s ",contador1, line); 
         contador1++;
    }

    fclose(fp);
    contador++;
    }
    return EXIT_SUCCESS;
    
}
