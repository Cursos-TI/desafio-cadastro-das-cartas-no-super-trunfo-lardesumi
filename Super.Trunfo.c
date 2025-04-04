#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[3], estado2[3]; // Agora pode armazenar "SP", "MG", etc.
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float dencidadePopulacional1, dencidadePopulacional2;
    float pibpCapita1, pibpCapital2;

    // Entrada de dados para a primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP, MG, RJ): ");
    scanf("%2s", estado1);  // Lê dois caracteres no máximo

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // acrescentado pelo desafio aventureiro 2 topicos:

    printf("Densidade Populacional:  (hab/km²): ");
    scanf("%f", &dencidadePopulacional1);

    printf("PIB per Capita (reais): ");
    scanf("%f", &pibpCapita1);

    // Entrada de dados para a segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: SP, MG, RJ): ");
    scanf("%2s", estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // acrescentado pelo desafio aventureiro 2 topicos:

    printf("Densidade Populacional:  (hab/km²): ");
    scanf("%f", &dencidadePopulacional2);

    printf("PIB per Capita (reais): ");
    scanf("%f", &pibpCapital2);

    // Exibição de saída das informações
    printf("\n=== Informações das Cartas ===\n");

    printf("\n****Carta 1:****\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.5f hab/km²\n", dencidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpCapita1);

    printf("\n");

    printf("\n****Carta 2:****\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.5f hab/km²\n", dencidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpCapital2);

    return 0;
}
