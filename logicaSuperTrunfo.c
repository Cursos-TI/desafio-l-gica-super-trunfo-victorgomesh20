#include <stdio.h>

int main() {


    char estado1[50], estado2[50];
    char codigo1[20], codigo2[20];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

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

  
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;


    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - Sair\n");


    printf("Digite a opção desejada (1-6): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
            printf("%s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: 
            printf("\nComparando Área:\n");
            printf("%s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", nomeCidade2, estado2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s (%s): %.2f\n", nomeCidade1, estado1, pib1);
            printf("%s (%s): %.2f\n", nomeCidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s (%s): %d pontos turísticos\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("%s (%s): %d pontos turísticos\n", nomeCidade2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1); 
            } else if (densidade2 < densidade1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 6.\n");
    }

    return 0;
}
