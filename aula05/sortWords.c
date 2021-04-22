#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]){
    int i,j,valor;
    char auxiliar[100];
    
    char* sortOrder = getenv("SORTORDER");
    
    if (sortOrder==NULL){
        printf("ERROR: Can't obtain variable\n");
        return EXIT_FAILURE;
    }

    if (strcmp(sortOrder,"0")==0){
        printf("Ordem crescente\n");
        for (i=1;i<argc-1;i++){
            for (j=i+1;j<argc-1;j++){
                valor=strcmp(argv[i],argv[j]);
                if (valor>0){
                    strcpy(auxiliar,argv[i]);
                    strcpy(argv[i],argv[j]);
                    strcpy(argv[j],auxiliar);
                }
            }
        }
    }
    else
    {
        printf("Ordem decrescente\n");
        for (i=1;i<argc-1;i++){
            for (j=i+1;j<argc-1;j++){
                valor=strcmp(argv[i],argv[j]);
                if (valor<0){
                    strcpy(auxiliar,argv[i]);
                    strcpy(argv[i],argv[j]);
                    strcpy(argv[j],auxiliar);
                    i=0;
                }
            }
        }
    }
    
    for (i=1;i<argc;i++){
        printf("%s\n", argv[i]);
    }

    
   

    return 0;

}