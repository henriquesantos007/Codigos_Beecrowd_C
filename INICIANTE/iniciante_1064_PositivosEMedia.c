#include <stdio.h>
 
int main() {
    int cont = 0;
    double num, soma = 0.0;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &num);

        if (num >= 0.0){
            cont++;
            soma += num;
        }
    }

    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", (double)soma/cont);
 
    return 0;
}