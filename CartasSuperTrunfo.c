#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados de cada carta
    char estado1, estado2, codigo1[4], codigo2[4], nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int para acomodar números maiores
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê uma string com espaços
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1); // Leitura de unsigned long int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cálculo do Super Poder para a primeira carta
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidade1) + pibPerCapita1;

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê uma string com espaços
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2); // Leitura de unsigned long int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder para a segunda carta
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidade2) + pibPerCapita2;

    // Comparação dos atributos e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");

    // Comparação de Área
    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");

    // Comparação de PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    // Comparação de Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");

    // Comparação de Densidade Populacional (menor valor vence)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    // Comparação de PIB per Capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    // Comparação de Super Poder
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
