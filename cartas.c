#include <stdio.h>

int main() {
    // ---------------- Carta 1 ----------------
    char estado[3];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;

    printf("=== Cadastro de Carta 1 - Super Trunfo ===\n");

    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%2s", estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigo);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa buffer
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

    printf("\n=== Carta 1 Cadastrada ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    // ---------------- Carta 2 ----------------
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float pib2;
    float area2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    printf("\n=== Cadastro de Carta 2 - Super Trunfo ===\n");

    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%2s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa buffer
    fgets(nomeCidade2, 50, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n=== Carta 2 Cadastrada ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}


