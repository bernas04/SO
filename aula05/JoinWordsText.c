#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char **argv )
{
    int i;
    char **vetor = argv;
   
    
    for (i=0; i<argc; i++){
        if (isalpha(vetor[i][0])){
            if (i != argc-1){
                printf("%s " ,vetor[i]);
            }
            else{
                printf("%s\n" ,vetor[i]);
            }
        }
    }
}