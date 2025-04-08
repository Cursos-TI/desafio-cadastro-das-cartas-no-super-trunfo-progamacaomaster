#include <stdio.h>

int main() {
    // ===================== CARTA 1 =====================
    char Estado1[50], Codigo1[50], Nome1[50];
    int Populacao1, pontoturisticos1;
    float Area1, Pib1;

    printf("Digite o estado da Carta 1: ");
    scanf("%49s", Estado1);

    printf("Digite o código da carta: ");
    scanf("%49s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Nome1);

    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos1);

    float Densidade1 = Populacao1 / Area1;
    float PIBpercapita1 = Pib1 / Populacao1;

    // ===================== CARTA 2 =====================
    char Estado2[50], Codigo2[50], Nome2[50];
    int Populacao2, pontoturisticos2;
    float Area2, Pib2;

    printf("\nDigite o estado da Carta 2: ");
    scanf("%49s", Estado2);

    printf("Digite o código da carta: ");
    scanf("%49s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Nome2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    float Densidade2 = Populacao2 / Area2;
    float PIBpercapita2 = Pib2 / Populacao2;

    // ===================== SAÍDA DAS CARTAS =====================
    printf("\n---- CARTA 1 ----\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Nome1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", Pib1);
    printf("Pontos turísticos: %d\n", pontoturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita1);

    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", Pib2);
    printf("Pontos turísticos: %d\n", pontoturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);

    // ===================== COMPARAÇÃO (PIB PER CAPITA) =====================
    printf("\n---- Comparação de Cartas (Atributo: PIB per capita) ----\n");
    printf("Carta 1 - %s: R$ %.2f\n", Nome1, PIBpercapita1);
    printf("Carta 2 - %s: R$ %.2f\n", Nome2, PIBpercapita2);

    if (PIBpercapita1 > PIBpercapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Nome1);
    } else if (PIBpercapita2 > PIBpercapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
