#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nmr1, nmr2, op;

    printf("Digite 1 para somar, 2 para subtrair, 3 para multiplicar e 4 para dividir: \n");
    scanf("%d", &op);
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &nmr1);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &nmr2);

    if (op == 1){

        nmr1 = nmr1 + nmr2;

        printf("O resultado da soma e: %d", nmr1);
    } 
    else if (op == 2) {
        nmr1 = nmr1 - nmr2;

        printf("O resultado da subtracao e: %d", nmr1);

    }
    else if (op == 3){

        nmr1 = nmr1 * nmr2;
        printf("O resultado da multiplicacao e: %d \n", nmr1);
    }
    else if (op == 4){
        if (nmr2 !=0) {
            float resultado = (float)nmr1 / nmr2;
            printf("O resultado da divisao e: %.2f\n", resultado);
        } else {
            printf("Erro: Nao e possivel divdir por zero\n");
        }
    } else {
        printf("Operacao Invalida\n");
    }
    return 0;
}



