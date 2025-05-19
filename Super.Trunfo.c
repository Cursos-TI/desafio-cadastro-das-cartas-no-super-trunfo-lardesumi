#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    int pontosTuristicos1, pontosTuristicos2;
    int opcao;

    // Cadastro da primeira carta
    printf("***Cadastro da Carta 1:***\n");
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("Densidade Populacional: ");
    scanf("%f", &densidade1);
    printf("PIB per Capita: ");
    scanf("%f", &pibPerCapita1);

    // Cadastro da segunda carta
    printf("\n***Cadastro da Carta 2:***\n");
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("Densidade Populacional: ");
    scanf("%f", &densidade2);
    printf("PIB per Capita: ");
    scanf("%f", &pibPerCapita2);

    // Menu de escolha de atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Populacao + PIB (Desafio Mestre)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    //CODIGO FOI ADAPTADO PARA O DESAFIO MESTRE//

    switch(opcao) {
        case 1:
            printf("\nPopulacao: ");
            populacao1 > populacao2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 2:
            printf("\nArea: ");
            area1 > area2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 3:
            printf("\nPIB: ");
            pib1 > pib2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 4:
            printf("\nPontos Turisticos: ");
            pontosTuristicos1 > pontosTuristicos2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 5:
            printf("\nDensidade Populacional: ");
            densidade1 < densidade2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 6:
            printf("\nPIB per Capita: ");
            pibPerCapita1 > pibPerCapita2 ? printf("%s venceu!\n", nome1) : printf("%s venceu!\n", nome2);
            break;
        case 7:
            printf("\nComparando Populacao + PIB:\n");
            float soma1, soma2;
            soma1 = populacao1 + pib1;
            soma2 = populacao2 + pib2;

            printf("%s - Populacao: %d | PIB: %.2f | Soma: %.2f\n", nome1, populacao1, pib1, soma1);
            printf("%s - Populacao: %d | PIB: %.2f | Soma: %.2f\n", nome2, populacao2, pib2, soma2);

            if (soma1 > soma2) {
                printf("Vencedor: %s\n", nome1);
            } else if (soma2 > soma1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}