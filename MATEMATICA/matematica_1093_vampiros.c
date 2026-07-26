#include <stdio.h>
#include <math.h> // Necessário para ceil() e pow()
 
int main() {
 
    int EV1, EV2, AT, D;
    double golpesV1, golpesV2;

    double probabilidade_de_vitoriaTurnoV1, probabilidade_de_vitoriaTurnoV2;

    double probabilidade_Vampiro1_vencer;

    while(1){
        // Lendo a entrada
        scanf("%d %d %d %d", &EV1, &EV2, &AT, &D);

        // Verificando o encerramento das entradas
        if (EV1 == 0 && EV2 == 0 && AT == 0 && D == 0)
            break;
        
        // Calculando a probabilidade de vitória
        // Quantos golpes cada vampiro aguenta
        golpesV1 = ceil((double)EV1 / D);
        golpesV2 = ceil((double)EV2 / D);

        // probabilidade de vitória no turno de cada um
        probabilidade_de_vitoriaTurnoV1 = (double)AT / 6.0;
        probabilidade_de_vitoriaTurnoV2 = 1.0 - probabilidade_de_vitoriaTurnoV1;

        if (AT == 3){
            // Em caso de uma disputa equilibrada (AT = 3)
            probabilidade_Vampiro1_vencer = golpesV1 / (golpesV1 + golpesV2);
        } else {
            // Quando um dos vampiros tem vantagens (AT != 3)
            probabilidade_Vampiro1_vencer = (1.0 - pow((probabilidade_de_vitoriaTurnoV2 / probabilidade_de_vitoriaTurnoV1), golpesV1)) / (1.0 - pow((probabilidade_de_vitoriaTurnoV2 / probabilidade_de_vitoriaTurnoV1),golpesV1 +golpesV2));
        }

        // Exibir a saída
        printf("%.1f\n", probabilidade_Vampiro1_vencer * 100);
            
    }
 
    return 0;
}