#include <stdio.h>

/*
* O algoritmo de Euclides diz que: o MDC de dois números,
* é o mesmo que o MDC do maior número e o resto da divisão
* entre o maior e o menor número.
*/

// Função para calcular o Máximo Divisor Comum usando o Algoritmo de Euclides
int mdc(int figurinhas01, int figurinhas02){

    int resto;

    // Cálculo do algoritmo de Euclides
    while (figurinhas02 != 0){
        resto = figurinhas01 % figurinhas02;
        figurinhas01 = figurinhas02;
        figurinhas02 = resto;
    }

    return figurinhas01;
}
 
int main() {
    
    // Entradas
    int casos_de_teste;
    int jogador01, jogador02;

    scanf("%d", &casos_de_teste);

    for (int i = 0; i < casos_de_teste; i++){
        scanf("%d %d", &jogador01, &jogador02);

        // Exibir a saída
        printf("%d\n", mdc(jogador01, jogador02));
    }
 
    return 0;
}