#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (int arg, char **argv){
    int contador=0;
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int numero = min + (rand()%max);
    int palpite=0;
    
    printf("%d\n" ,numero);

    if (arg != 3){
        printf("Número de argumentos inválido!\n");
        return EXIT_FAILURE;
    }
    else{
        printf("Bem vindo ao jogo AltoBaixo!\nTente adivinhar um número entre %d e %d\n", min, max);
        //printf("%d\n", numero);
        while (palpite != numero){
        scanf("%d" ,&palpite);
        if (palpite>numero){
            printf("Alto\n");
            contador++;
        }
        else if (palpite<numero)
        {
            printf("Baixo\n");
            contador++;
        }
        else{
            contador++;
            printf("ACERTOU!!! \nNº de tentativas: %d\n", contador);
        }
        }
    }
}
