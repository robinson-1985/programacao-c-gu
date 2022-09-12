//matrizes parte 2

/*
array unidimensioa (vetores) int numeros[5];
[0][1][2][3][4]

array multidimensionais (matrizes) int numeros[5][5]; [linhas][colunas]
[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/

#include<stdio.h>

int main(){
    //vetores de inteiros
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0; i <2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Números[%d][%d] vale %d\n", i, j, numeros[i][j] );
        }
    }

     //vetores e reais
    float valores[2][2];
    valores[0][0] = 1.5;
    valores[0][1] = 2.1;
    valores[1][0] = 3.6;
    valores[1][1] = 4.4;

    for(int m = 0; m < 2; m++){
        for(int n = 0; n < 2; n++){
            printf("Valores [%2.f][%2.f] vale %2.f\n", m, n, valores[m][n]);
        }
    }
    
    return 0;
}
