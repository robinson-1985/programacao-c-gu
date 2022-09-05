#include <stdio.h>
//Estruturas de repetição: for, whilw e do...while ( para, enquanto, faça...enquanto)

/* Utilizando o for (para)
 Faça um programa no qual receba e some 5 números inteiros, até que a entrada seja 0; */

int main(){
	//variáveis
	int numero, soma = 0;
	
	// para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
	for(int i =0; i < 5; i++){
		//entrada
		printf("Informe um número: ");
		scanf("%d", &numero);
		
		//processamento
		soma = soma + numero;
	}
	
	//saída
	printf("A soma é %d\n", soma);
	
	return 0;
}
