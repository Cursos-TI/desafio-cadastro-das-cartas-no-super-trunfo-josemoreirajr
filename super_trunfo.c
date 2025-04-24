#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[31];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[31];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Digite a sigla do Estado (ex: CE): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Digite a sigla do Estado (ex: BA): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)(pib1 * 1000000000.0) / populacao1; // Converter PIB para reais

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2; // Converter PIB para reais

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    // Escolha do atributo para comparação (neste caso, População)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);

    // Determinação e exibição da carta vencedora com base na População
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm a mesma população!\n");
    }
    printf("\n");

    // Exemplo de comparação por Área (apenas para ilustração, a comparação principal é por População)
    printf("Comparação de cartas (Área):\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm a mesma área!\n");
    }
    printf("\n");

    // Exemplo de comparação por PIB (apenas para ilustração)
    printf("Comparação de cartas (PIB):\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm o mesmo PIB!\n");
    }
    printf("\n");

    // Exemplo de comparação por Densidade Populacional (a menor vence)
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm a mesma densidade populacional!\n");
    }
    printf("\n");

    // Exemplo de comparação por PIB per Capita
    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas têm o mesmo PIB per Capita!\n");
    }
    printf("\n");

    return 0;
}
