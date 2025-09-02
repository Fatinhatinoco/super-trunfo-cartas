#include <stdio.h>

int main() {
    char estado[3];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;

    printf("=== Cadastro de Carta Super Trunfo - Países ===\n");

    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%2s", estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigo);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    fgets(nomeCidade, 50, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;
    pibPerCapita = (pib * 1000000000) / populacao;

    printf("\n=== Carta Cadastrada ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    return 0;
}

