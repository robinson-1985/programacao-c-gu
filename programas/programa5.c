// Estrutura de repetição 
// do..while (faça...enquanto)

/* Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos,mas, 
que tenha um critério de parada e antes de iniciar o loop a condição é checada.


Exemplo: 
Faça um programa no qual receba e some números inteiros, até que a entrada seja 0
e apresente a soma no final. */

#include <stdio.h>>

int main(){
    int numero, soma = 0;

    printf("Informe um número: ");
    scanf("%d",&numero);

    while (numero != 0) {
        soma = soma + numero;
        //entrada
        printf("Informe um número: ");
        scanf("%d",&numero);
    }

    printf("A soma é %d\n", soma);

    return 0;
}