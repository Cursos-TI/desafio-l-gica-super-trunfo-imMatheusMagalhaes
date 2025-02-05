#include <stdio.h>

int main()
{
    // Variáveis para as cartas
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Menu de escolha de atributos
    int opcao1, opcao2;
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &opcao1);
    printf("Escolha o segundo atributo (1-5): ");
    scanf("%d", &opcao2);

    // Variáveis para armazenar os valores dos atributos escolhidos
    float atributo1_carta1, atributo1_carta2;
    float atributo2_carta1, atributo2_carta2;

    // Atribuir valores aos atributos escolhidos para a primeira carta
    switch (opcao1)
    {
    case 1:
        atributo1_carta1 = populacao1;
        atributo1_carta2 = populacao2;
        break;
    case 2:
        atributo1_carta1 = area1;
        atributo1_carta2 = area2;
        break;
    case 3:
        atributo1_carta1 = pib1;
        atributo1_carta2 = pib2;
        break;
    case 4:
        atributo1_carta1 = pontos_turisticos1;
        atributo1_carta2 = pontos_turisticos2;
        break;
    case 5:
        atributo1_carta1 = populacao1 / area1; // Densidade populacional
        atributo1_carta2 = populacao2 / area2;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    // Atribuir valores aos atributos escolhidos para a segunda carta
    switch (opcao2)
    {
    case 1:
        atributo2_carta1 = populacao1;
        atributo2_carta2 = populacao2;
        break;
    case 2:
        atributo2_carta1 = area1;
        atributo2_carta2 = area2;
        break;
    case 3:
        atributo2_carta1 = pib1;
        atributo2_carta2 = pib2;
        break;
    case 4:
        atributo2_carta1 = pontos_turisticos1;
        atributo2_carta2 = pontos_turisticos2;
        break;
    case 5:
        atributo2_carta1 = populacao1 / area1; // Densidade populacional
        atributo2_carta2 = populacao2 / area2;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    // Comparação dos atributos
    printf("\nResultados da comparação:\n");

    // Comparação do primeiro atributo
    if (opcao1 == 5)
    {
        // Densidade populacional: menor valor vence
        printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n",
               atributo1_carta1, atributo1_carta2,
               atributo1_carta1 < atributo1_carta2 ? "Carta 1 vence" : "Carta 2 vence");
    }
    else
    {
        // Outros atributos: maior valor vence
        printf("Atributo %d: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n",
               opcao1, atributo1_carta1, atributo1_carta2,
               atributo1_carta1 > atributo1_carta2 ? "Carta 1 vence" : "Carta 2 vence");
    }

    // Comparação do segundo atributo
    if (opcao2 == 5)
    {
        // Densidade populacional: menor valor vence
        printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n",
               atributo2_carta1, atributo2_carta2,
               atributo2_carta1 < atributo2_carta2 ? "Carta 1 vence" : "Carta 2 vence");
    }
    else
    {
        // Outros atributos: maior valor vence
        printf("Atributo %d: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %s\n",
               opcao2, atributo2_carta1, atributo2_carta2,
               atributo2_carta1 > atributo2_carta2 ? "Carta 1 vence" : "Carta 2 vence");
    }

    // Determinar a carta vencedora com base na soma dos atributos
    float soma_carta1 = atributo1_carta1 + atributo2_carta1;
    float soma_carta2 = atributo1_carta2 + atributo2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma_carta1);
    printf("Carta 2: %.2f\n", soma_carta2);

    if (soma_carta1 > soma_carta2)
    {
        printf("Carta 1 vence no geral!\n");
    }
    else if (soma_carta2 > soma_carta1)
    {
        printf("Carta 2 vence no geral!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}