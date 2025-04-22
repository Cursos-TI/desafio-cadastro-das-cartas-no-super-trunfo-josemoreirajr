#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1; // Converter PIB para reais

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2; // Converter PIB para reais

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    return 0;
}
