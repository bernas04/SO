#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv){
    if (argc == 4){
        printf("Calculadora Maravilha\n");
        char *ptr;
        double op1=strtod(argv[1],&ptr);
        double op2=strtod(argv[3],&ptr);
        char l = *argv[2];
        //char l = argv[2][0];
        

        double resultado;
        switch (l)
        {
        case '+':
            resultado = op1+op2;
            printf("%.2f + %.2f = %.2f\n", op1, op2, resultado);
            break;
        case '-':
            resultado = op1-op2;
            printf("%.2f - %.2f = %.2f\n", op1, op2, resultado);
            break;
        case 'x':
            resultado=op1*op2;
            printf("%.2f * %.2f = %.2f\n", op1, op2, resultado);
            break;
        case '/':
            resultado=op1/op2;
            printf("%.2f / %.2f = %.2f\n", op1, op2, resultado);
            break;
        case 'p':
            resultado = pow(op1, op2);
            printf("%.2f ^ %.2f = %.2f\n", op1, op2, resultado);
            break;
        }
        return 0;
    }
    else{
        printf("Número incorreto de argumentos\n");
        return 2;
    }
}