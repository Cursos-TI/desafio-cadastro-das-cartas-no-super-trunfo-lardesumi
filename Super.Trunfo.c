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

    // Cálculo automático da densidade e do PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais

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

    // Cálculo automático da densidade e do PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais

    // Cálculo do Super Poder (como você já tinha)
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

    printf("\n**** Carta 2 (%s): ****\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ====================================
    // AQUI ENTRA O NOVO DESAFIO DE LOGICA
    // ====================================

    // Comparação de cartas com base em UM atributo (ex: População)
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");

    printf("\nCarta 1 - %s (%s): %lu habitantes", nomeCidade1, estado1, populacao1);
    printf("\nCarta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // =======================================================================
    // AQUI ENTRA O NOVO DESAFIO COM SWITCH PARA FUNCIONALIDADE DO CODIGO
    // =======================================================================
    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta 1) vs %s (Carta 2):\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontos1);
            printf("%s: %d pontos\n", nomeCidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (quanto MENOR, melhor)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, selecione um número de 1 a 5.\n");
            break;
    }

    return 0;
}