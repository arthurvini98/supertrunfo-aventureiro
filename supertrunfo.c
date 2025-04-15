#include <stdio.h>
#include <stdlib.h>

// Programa: Cadastro de Cartas do Super Trunfo - Cidades
// Objetivo: Ler e exibir os dados de duas cartas cadastradas pelo usuário
// Autor: João Pereira da Silva Neto

int main() {

    float densidade_populacional1;
    float densidade_populacional2;
    float pib_per_capita1;
    float pib_per_capita2;

    // Dados da primeira carta
    char estado1;
    char codigo1[10];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Dados da segunda carta
    char estado2;
    char codigo2[10];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Instruções e leitura da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1); // espaço antes de %c para ignorar enter anterior

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1/area1;
    printf ("Densidade populacional da carta 1: %f", densidade_populacional1);
    pib_per_capita1 = pib1/populacao1;
    printf("\n");
    printf ("PIB per capita da carta 1: %f", pib_per_capita1);
    printf("\n");
    printf("\n");

    // Instruções e leitura da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2); // espaço antes de %c para ignorar enter anterior

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);
    printf ("\n");

    densidade_populacional2 = populacao2/area2;
    printf ("Densidade populacional da carta 2: %f", densidade_populacional2);
    printf ("\n");
    pib_per_capita2 = pib2/populacao2;
    printf ("PIB per capita da carta 2: %f", pib_per_capita2);

    printf("\n");

    // Exibição das informações da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n");

    // Exibição das informações da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    int opcao;

    printf("=== SUPER TRUNFO - MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", cidade1, cidade2);

    switch(opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: R$ %.2f bilhoes\n", cidade1, pib1);
            printf("%s: R$ %.2f bilhoes\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica (MENOR vence)\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Tente novamente!\n");

    return 0;
}
}
