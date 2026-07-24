#include <stdio.h>
 
int main() {
 
    int entrada_mes;

    // Entrada Teste
    scanf("%d", &entrada_mes);

    switch (entrada_mes) {
    // Janeiro = 1
    case 1:
        printf("January\n");
        break;

    // Fevereiro = 2
    case 2:
        printf("February\n");
        break;

    // Março = 3
    case 3:
        printf("March\n");
        break;

    // Abril = 4
    case 4:
        printf("April\n");
        break;

    // Maio = 5
    case 5:
        printf("May\n");
        break;

    // Junho = 6
    case 6:
        printf("June\n");
        break;

    // Julho = 7
    case 7:
        printf("July\n");
        break;

    // Agosto = 8
    case 8:
        printf("August\n");
        break;

    // Setembro = 9
    case 9:
        printf("September\n");
        break;

    // Outubro = 10
    case 10:
        printf("October\n");
        break;

    // Novembro = 11
    case 11:
        printf("November\n");
        break;

    // Dezembro = 1
    case 12:
        printf("December\n");
        break;
    
    default:
        break;
    }
 
    return 0;
}