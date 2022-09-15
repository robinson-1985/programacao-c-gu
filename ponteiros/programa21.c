#include <stdio.h>

void incrementa(int* contador) {
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*contador)); // valor
    printf("O endereço de memória é %d\n", contador); //endereço de memória

    printf("Depois de incrementar.\n");
    // valor = valor + 1;
    // valor = valor - 1;
    // valor++;
    // valor --;
    //++valor;
    //--valor;
    printf("O contador vale %d\n", ++(*contador));
    printf("O endereço de memória é %d\n", contador);
}

int main(){
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memória é %d\n", &contador);

    //cópia por valor
    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memória é %d\n", &contador);

    return 0;
}
