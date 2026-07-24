#include <stdio.h>
#include <string.h> // Biblioteca necessária para a comparação de strings
 
int main() {
    // O tamanho do vetro de cada palavra é definido da maior palavra possível para cada uma das três entradas. Otimizando espaço
    char grupo[13];       // primeira entrada relacionada ao grupo do indivíduo (vertebrado/invertebrado)
    char classe[9];      // segunda entrada para a classe do indivíduo (ave, mamífero, inseto, anelidio)
    char alimentacao[11]; // terceira entrada para a forma de alimentação do animal (herbivoro, onivoro, carnivoro, hematofago)

    // Leitura das entradas para testes
    scanf("%s", grupo);
    scanf("%s", classe);
    scanf("%s", alimentacao);

    /*
    printf("%s -> %s -> %s\n", grupo, classe, alimentacao);
    */

    if (strcmp("vertebrado", grupo) == 0){
        
        // Classes (Aves e Mamíferos)
        if (strcmp("ave", classe) == 0){

            // Dieta das Aves
            if (strcmp("carnivoro", alimentacao) == 0){
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {

            // Dieta dos Mamíferos
            if (strcmp("herbivoro", alimentacao) == 0){
                printf("vaca\n");
            } else {
                printf("homem\n");
            }
        }
    } else if (strcmp("invertebrado", grupo) == 0){
        
        // Classes (Insetos e Anelídios)
        if (strcmp("inseto", classe) == 0){

            // Dieta dos Insetos
            if (strcmp("herbivoro", alimentacao) == 0){
                printf("lagarta\n");
            } else {
                printf("pulga\n");
            }
        } else {

            // Dieta dos Anelídios
            if (strcmp("onivoro", alimentacao) == 0){
                printf("minhoca\n");
            } else {
                printf("sanguessuga\n");
            }
        }
    }
 
    return 0;
}