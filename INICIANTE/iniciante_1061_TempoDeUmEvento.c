#include <stdio.h>
#include <string.h> // Biblioteca para particionar as strings de hora

#define SEGUNDOS_EM_24HRS 86400     // Variável global para definir quantos segundo há em 24 horas
 
int main() {
 
    // Dados do dia inicial do evento
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio; // Essas variáveis serão recolhidas na entrada
    unsigned long segundos_acumulados_inicio;                   // Essa variável serve para posteriormente, com as entradas, calcular os segundos faltantes até o fim do dia inicial do evento (A duração do evento no dia inicial)

    // Dados do dia final do evento (O mesmo comportamento do dia inicial se repete para o dia final)
    int dia_fim, hora_fim, minuto_fim, segundo_fim;
    unsigned long segundos_acumulados_fim;

    // Essas variáveis servirão para acumular os segundos em todos os dias desconsiderando o dia inicial e o dia final.
    unsigned long segundos_dos_dias_entre_inicio_e_fim;
    unsigned long segundos_totais_do_evento;

    // Essas são as variáveis de saída que vamos calcular no decorrer do programa
    int dia_total, hora_total, minuto_total, segundo_total;
    

    // Capturando a data do dia inicial e o horário inicial
    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    // Capturando a data do dia final e o horário final
    scanf(" Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);



    // Convertendo o tempo faltante para encerrar o dia de início em segundos
    segundos_acumulados_inicio = segundo_inicio + (minuto_inicio * 60) + (hora_inicio * 60 * 60);   // Conversão das entradas em segundos e acumulação dos valores
    segundos_acumulados_inicio = SEGUNDOS_EM_24HRS - segundos_acumulados_inicio;                    // Nessa situação, subtraímos os segundos acumulados do dia inicial do número de segundos em um dia inteiro. Isso para considerar o complemento do tempo desse dia (que é o momento que o evento está acontecendo)

    // Convertendo o tempo do dia de fim em segundos
    segundos_acumulados_fim = segundo_fim + (minuto_fim * 60) + (hora_fim * 60 * 60);

    // Aqui acontece a conversão dos dias que duraram 24 horas completas de evento
    segundos_dos_dias_entre_inicio_e_fim = SEGUNDOS_EM_24HRS * (dia_fim - dia_inicio - 1); // é subtraído 1 pois se o evento termina no dia seguinte que começou, não existe dia inteiros (que duraram 24hrs completas) entre a data de início e fim


    // Cálculo total de segundos que o evento durou
    segundo_total = segundos_acumulados_fim + segundos_acumulados_inicio + segundos_dos_dias_entre_inicio_e_fim; // Acumulando segundos do dia inicial, do dia final, e dos dias entre eles


    // A partir daqui acontece a conversão de valores agrupando os segundos com as unidades de tempo corretas
    minuto_total = segundo_total / 60;      // minutos totais é a parte inteira da divisão dos segundos totais do evento divididos por 60
    segundo_total = segundo_total % 60;     // os segundos totais são o resto dessa divisão

    hora_total = minuto_total / 60;         // as horas totais são a parte inteira dos minutos calculados divididos por 60
    minuto_total = minuto_total % 60;       // e os minutos precisam ser atualizados com o resto dessa divisão

    dia_total = hora_total / 24;            // a quantidade de dias é a parte inteira da divisão das horas calculadas por 24
    hora_total = hora_total % 24;           // as horas serão o resto dessa divisão


    // Exibição da saída
    printf("%d dia(s)\n", dia_total);
    printf("%d hora(s)\n", hora_total);
    printf("%d minuto(s)\n", minuto_total);
    printf("%d segundo(s)\n", segundo_total);

    return 0;
}