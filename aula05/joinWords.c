#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv )
{
    int i;
    char **vetor = argv;
    for (i=0; i<argc; i++){
        if (i != argc-1){
            printf("%s " ,vetor[i]);
        }
        else{
            printf("%s\n" ,vetor[i]);
        }
    }
    


}