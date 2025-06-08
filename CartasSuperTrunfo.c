#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Estrutura para armazenar dados das cartas
    // Dados da Carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, pontosT1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontosT2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("\n==== Cadastro da Carta 1 ====\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    // Limpar buffer antes de usar fgets
    while (getchar() != '\n');
    //serve para limpar o buffer de entrada
    //buffer: Memória temporária onde os dados digitados ficam antes de serem lido


    printf("Código da Carta (ex: A01):  ");
    scanf("%s", &codigo1);


    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    /*
    o fgets lê até o fim da linha (incluindo os espaços)
    já o scanf para de ler ao encontrar um espaço
    */

     while (getchar() != '\n');


    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosT1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;


    // Entrada de dados para a segunda carta
    printf("\n==== Cadastro da Carta 2 ====\n");

     printf("Estado (A-H): ");
    scanf("%c", &estado2);

    while (getchar() != '\n');
    
    printf("Código da Carta (ex: A01):  ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
   
     while (getchar() != '\n');
     
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosT2);

     // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    // Exibição dos dados cadastrados 

    //carta 1
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);  
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosT1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);


    //carta 2
    printf("\n==== Carta 2 ====\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}