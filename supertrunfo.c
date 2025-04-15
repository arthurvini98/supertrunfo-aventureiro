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
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    //Duelo// Densidade populacional
    printf ("Duelo - Densidade Populacional\n");
    printf ("Carta 1 - %s: %f", cidade1, densidade_populacional1);
    printf ("\n");
    printf ("Carta 2 - %s: %f", cidade2, densidade_populacional2);
    printf ("\n");
    if (densidade_populacional1<densidade_populacional2)
    printf ("Resultado - Carta 1 (%s) venceu!", cidade1);
    else {
        printf ("Resultado - Carta 2 (%s) venceu!", cidade2);
    }


    return 0;
}
