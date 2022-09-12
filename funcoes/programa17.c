#include <stdio.h>

// Estrutura das funções
// main --> principal

/* - tipo de retorno
-nome
- parâmetro de entrada (opcional)
- implemnetação
- retorno (opcional)
*/

void mensagem(){
    printf("Bem vindo");
}

int soma(int num1, int num2){
    return num1 + num2;

    // ou int resultado = num1 + num2;
    // return resultado;
}

char proximo_char(char caractere){
    printf("%c", caractere+1);
}

int main(){
   

    return 0;
}
