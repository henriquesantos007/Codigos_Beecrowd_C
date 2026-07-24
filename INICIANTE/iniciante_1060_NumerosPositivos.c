#include <stdio.h>
 
int main() {
 
    int contador_de_positivos = 0; // Variável que será icrementada à cada positivo registrado
    double entrada;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &entrada);
        if (entrada >= 0 ) {
            contador_de_positivos++;
        }
    }

    printf("%d valores positivos\n", contador_de_positivos);
 
    return 0;
}