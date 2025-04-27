#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para a função exit()

// Definição da estrutura para representar uma carta do país
typedef struct {
    char estado[3];
    char codigo[5];
    char nomeCidade[31];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularAtributos(Carta *carta) {
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
    carta->pibPerCapita = (float)(carta->pib * 1000000000.0) / carta->populacao;
}

// Função para comparar as cartas com base no atributo escolhido
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparação de cartas (");
    switch (atributo) {
        case 1:
            printf("Atributo: População):\n");
            printf("Carta 1 - %s (%s): %lu\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
            printf("Carta 2 - %s (%s): %lu\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: As cartas têm a mesma população!\n");
            }
            break;
        case 2:
            printf("Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
            printf("Carta 2 - %s (%s): %.2f km²\n", carta2.nomeCidade, carta2.estado, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: As cartas têm a mesma área!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", carta1.nomeCidade, carta1.estado, carta1.pib);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", carta2.nomeCidade, carta2.estado, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: As cartas têm o mesmo PIB!\n");
            }
            break;
        case 4:
            printf("Atributo: Número de Pontos Turísticos):\n");
            printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.numPontosTuristicos);
            printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.numPontosTuristicos);
            if (carta1.numPontosTuristicos > carta2.numPontosTuristicos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.numPontosTuristicos > carta1.numPontosTuristicos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: As cartas têm o mesmo número de pontos turísticos!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: As cartas têm a mesma densidade populacional!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    printf(")\n");
}

int main() {
    // Variáveis das Cartas
    Carta carta1, carta2;
    int escolha;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Digite a sigla do Estado (ex: CE): ");
    scanf("%s", carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta1.nomeCidade);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Digite a sigla do Estado (ex: BA): ");
    scanf("%s", carta2.estado);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta2.nomeCidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita para ambas as cartas
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Menu interativo para escolher o atributo de comparação
    do {
        printf("Escolha o atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                compararCartas(carta1, carta2, escolha);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}
