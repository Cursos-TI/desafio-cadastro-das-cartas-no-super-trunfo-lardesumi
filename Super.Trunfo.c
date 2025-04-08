#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados para Carta 1 

    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP, MG, RJ): ");
    scanf("%2s", estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("Densidade populacional (hab/km²): ");
    scanf("%f", &densidade1);

    printf("PIB per capita (reais): ");
    scanf("%f", &pibPerCapita1);

    // Entrada de dados para Carta 2 

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: SP, MG, RJ): ");
    scanf("%2s", estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Densidade populacional (hab/km²): ");
    scanf("%f", &densidade2);

    printf("PIB per capita (reais): ");
    scanf("%f", &pibPerCapita2);

    // Cálculo do Super Poder (usando os dados fornecidos)
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das informações
    printf("\n=== Informações das Cartas ===\n");

    printf("\n**** Carta 1 (%s): ****\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n");

    printf("\n**** Carta 2 (%s): ****\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n");

    printf("\n=== Comparação de Cartas ===\n");

    printf("População: %s venceu (%d)\n", (populacao1 > populacao2 ? "Carta 1" : "Carta 2"), 
    populacao1 > populacao2);
    printf("Área: %s venceu (%d)\n", (area1 > area2 ? "Carta 1" : "Carta 2"), area1 > area2);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2 ? "Carta 1" : "Carta 2"), pib1 > pib2);
    printf("Pontos Turísticos: %s venceu (%d)\n", (pontos1 > pontos2 ? "Carta 1" : "Carta 2"), 
    pontos1 > pontos2);
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2 ? "Carta 1" : "Carta 2"), 
    densidade1 < densidade2);
    printf("PIB per Capita: %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? "Carta 1" : "Carta 2"), 
    pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %s venceu (%d)\n", (superPoder1 > superPoder2 ? "Carta 1" : "Carta 2"), 
    superPoder1 > superPoder2);

    return 0;
}
