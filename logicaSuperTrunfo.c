#include <stdio.h>

int main() {

    // Dados das cartas
    char estado1[50], estado2[50];
    char codigo1[20], codigo2[20];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da segunda cidade: ");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Menu interativo para escolher o primeiro atributo
    int escolha1;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada (1-5): ");
    scanf("%d", &escolha1);

    // Menu interativo para escolher o segundo atributo (sem repetir o primeiro)
    int escolha2;
    printf("\nEscolha o segundo atributo para comparação (não repita o primeiro atributo):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");

    // Garantir que o usuário não escolha o mesmo atributo
    do {
        printf("Digite a opção desejada (1-5): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    // Comparação de Atributos
    float atributo1Carta1 = 0, atributo1Carta2 = 0;
    float atributo2Carta1 = 0, atributo2Carta2 = 0;
    float somaCarta1, somaCarta2;

    // Comparando o primeiro atributo
    switch (escolha1) {
        case 1: // População
            atributo1Carta1 = populacao1;
            atributo1Carta2 = populacao2;
            break;
        case 2: // Área
            atributo1Carta1 = area1;
            atributo1Carta2 = area2;
            break;
        case 3: // PIB
            atributo1Carta1 = pib1;
            atributo1Carta2 = pib2;
            break;
        case 4: // Pontos turísticos
            atributo1Carta1 = pontosTuristicos1;
            atributo1Carta2 = pontosTuristicos2;
            break;
        case 5: // Densidade demográfica
            atributo1Carta1 = densidade1;
            atributo1Carta2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparando o segundo atributo
    switch (escolha2) {
        case 1: // População
            atributo2Carta1 = populacao1;
            atributo2Carta2 = populacao2;
            break;
        case 2: // Área
            atributo2Carta1 = area1;
            atributo2Carta2 = area2;
            break;
        case 3: // PIB
            atributo2Carta1 = pib1;
            atributo2Carta2 = pib2;
            break;
        case 4: // Pontos turísticos
            atributo2Carta1 = pontosTuristicos1;
            atributo2Carta2 = pontosTuristicos2;
            break;
        case 5: // Densidade demográfica
            atributo2Carta1 = densidade1;
            atributo2Carta2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Cálculo da soma dos atributos
    somaCarta1 = atributo1Carta1 + atributo2Carta1;
    somaCarta2 = atributo2Carta2 + atributo2Carta2;

    // Exibição dos resultados
    printf("\n>>> Comparação de Cartas <<<\n");

    printf("%s (%s): Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", nomeCidade1, estado1, atributo1Carta1, atributo2Carta1, somaCarta1);
    printf("%s (%s): Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", nomeCidade2, estado2, atributo1Carta2, atributo2Carta2, somaCarta2);

    // Verificando o vencedor
    if (somaCarta1 > somaCarta2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (somaCarta2 > somaCarta1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}