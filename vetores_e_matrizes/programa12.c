//vetores - parte 1

#include<stdio.h>

// array unidimensional
int main(){
    // vetores e strings
    char nome[50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Olá %s\n", nome);

    // vetores e caracteres
    char letras[26];//0...25
    // 'b'
    int contador = 0;
    for(int i = 97; i < 122; i++){
        letras[contador] = i;
        contador++;
    }
    //Imprimindo as letras e seus valores em decimal
    for(int i = 0; i < 26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }

    return 0;
}
