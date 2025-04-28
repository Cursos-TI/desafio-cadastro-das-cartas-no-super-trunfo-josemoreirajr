#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para a função exit()

// Definição da estrutura para representar uma carta de país
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

// Função para comparar um atributo específico e retornar o resultado da comparação
int compararAtributo(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1: // População
            return (carta1.populacao > carta2.populacao) ? 1 : ((carta1.populacao < carta2.populacao) ? 2 : 0);
        case 2: // Área
            return (carta1.area > carta2.area) ? 1 : ((carta1.area < carta2.area) ? 2 : 0);
        case 3: // PIB
            return (carta1.pib > carta2.pib) ? 1 : ((carta1.pib < carta2.pib) ? 2 : 0);
        case 4: // Número de Pontos Turísticos
            return (carta1.numPontosTuristicos > carta2.numPontosTuristicos) ? 1 : ((carta1.numPontosTuristicos < carta2.numPontosTuristicos) ? 2 : 0);
        case 5: // Densidade Demográfica (menor valor vence)
            return (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : ((carta1.densidadePopulacional > carta2.densidadePopulacional) ? 2 : 0);
        default:
            return -1; // Indica um atributo inválido
    }
}

// Função para obter o nome do atributo com base na escolha
const char* getNomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Número de Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // Variáveis das Cartas
    Carta carta1, carta2;
    int escolha1, escolha2;

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

    // Menu interativo para escolher os atributos de comparação
    do {
        printf("Escolha o PRIMEIRO atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha1);

        if (escolha1 == 0) {
            printf("Saindo do programa.\n");
            break;
        }

        if (escolha1 < 1 || escolha1 > 5) {
            printf("Opção inválida. Por favor, tente novamente.\n");
            continue;
        }

        printf("\nEscolha o SEGUNDO atributo para comparar as cartas:\n");
        printf("%s", (escolha1 != 1) ? "1 - População\n" : "");
        printf("%s", (escolha1 != 2) ? "2 - Área\n" : "");
        printf("%s", (escolha1 != 3) ? "3 - PIB\n" : "");
        printf("%s", (escolha1 != 4) ? "4 - Número de Pontos Turísticos\n" : "");
        printf("%s", (escolha1 != 5) ? "5 - Densidade Demográfica\n" : "");
        printf("0 - Sair\n");
        printf("Digite sua segunda escolha: ");
        scanf("%d", &escolha2);

        if (escolha2 == 0) {
            printf("Saindo do programa.\n");
            break;
        }

        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
            printf("Opção inválida ou atributo já escolhido. Por favor, tente novamente.\n");
            continue;
        }

        printf("\n--- Comparação: %s vs %s ---\n", carta1.nomeCidade, carta2.nomeCidade);

        // Comparação do primeiro atributo
        int resultado1 = compararAtributo(carta1, carta2, escolha1);
        printf("Atributo 1: %s\n", getNomeAtributo(escolha1));
        printf("%s: ", carta1.nomeCidade);
        switch (escolha1) {
            case 1: printf("%lu\n", carta1.populacao); break;
            case 2: printf("%.2f km²\n", carta1.area); break;
            case 3: printf("%.2f bilhões\n", carta1.pib); break;
            case 4: printf("%d\n", carta1.numPontosTuristicos); break;
            case 5: printf("%.2f hab/km²\n", carta1.densidadePopulacional); break;
        }
        printf("%s: ", carta2.nomeCidade);
        switch (escolha1) {
            case 1: printf("%lu\n", carta2.populacao); break;
            case 2: printf("%.2f km²\n", carta2.area); break;
            case 3: printf("%.2f bilhões\n", carta2.pib); break;
            case 4: printf("%d\n", carta2.numPontosTuristicos); break;
            case 5: printf("%.2f hab/km²\n", carta2.densidadePopulacional); break;
        }
        printf("Resultado 1: %s %s no atributo %s.\n", carta1.nomeCidade,
               (resultado1 == 1) ? "venceu" : ((resultado1 == 2) ? "perdeu" : "empatou"),
               getNomeAtributo(escolha1));

        // Comparação do segundo atributo
        int resultado2 = compararAtributo(carta1, carta2, escolha2);
        printf("\nAtributo 2: %s\n", getNomeAtributo(escolha2));
        printf("%s: ", carta1.nomeCidade);
        switch (escolha2) {
            case 1: printf("%lu\n", carta1.populacao); break;
            case 2: printf("%.2f km²\n", carta1.area); break;
            case 3: printf("%.2f bilhões\n", carta1.pib); break;
            case 4: printf("%d\n", carta1.numPontosTuristicos); break;
            case 5: printf("%.2f hab/km²\n", carta1.densidadePopulacional); break;
        }
        printf("%s: ", carta2.nomeCidade);
        switch (escolha2) {
            case 1: printf("%lu\n", carta2.populacao); break;
            case 2: printf("%.2f km²\n", carta2.area); break;
            case 3: printf("%.2f bilhões\n", carta2.pib); break;
            case 4: printf("%d\n", carta2.numPontosTuristicos); break;
            case 5: printf("%.2f hab/km²\n", carta2.densidadePopulacional); break;
        }
        printf("Resultado 2: %s %s no atributo %s.\n", carta1.nomeCidade,
               (resultado2 == 1) ? "venceu" : ((resultado2 == 2) ? "perdeu" : "empatou"),
               getNomeAtributo(escolha2));

        // Cálculo da soma dos resultados (vitória = 1, derrota = -1, empate = 0)
        int pontuacaoCarta1 = (resultado1 == 1) + (resultado2 == 1);
        int pontuacaoCarta2 = (resultado1 == 2) + (resultado2 == 2);

        printf("\n--- Resultado Final ---\n");
        printf("Soma dos atributos de %s: %d\n", carta1.nomeCidade, pontuacaoCarta1);
        printf("Soma dos atributos de %s: %d\n", carta2.nomeCidade, pontuacaoCarta2);

        if (pontuacaoCarta1 > pontuacaoCarta2) {
            printf("Vencedor geral: %s!\n", carta1.nomeCidade);
        } else if (pontuacaoCarta2 > pontuacaoCarta1) {
            printf("Vencedor geral: %s!\n", carta2.nomeCidade);
        } else {
            printf("Empate geral!\n");
        }

        printf("\n");

    } while (escolha1 != 0);

    return 0;
}
