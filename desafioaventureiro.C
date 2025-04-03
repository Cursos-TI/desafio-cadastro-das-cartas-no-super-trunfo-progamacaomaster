#include <stdio.h>

int main() {
    // Carta um
    char Estado1[50] = "Riodejaneiro";
    char Codigo1[50] = "A01";
    char Nome1[50] = "Araruama";
    int Populacao1 = 28012;
    float Area1 = 28.000;
    float Pib1 = 35000.0;
    int pontoturisticos1 = 35;
    
    // Entrada de dados
    printf("Digite o estado: ");
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

    // Cálculo da primeira carta
    float densidadepopulacional1 = Populacao1 / Area1;
    float PIBPerCapita1 = Pib1 / Populacao1;

    // Saída formatada para primeira carta
    printf("\n---- Dados Cadastrados ----\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Nome1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", Pib1);
    printf("Número de pontos turísticos: %d\n", pontoturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapita1);

    // Carta dois
    char Estado2[50] = "Amazonas";
    char Codigo2[50] = "A02";
    char Nome2[50] = "Manaus";
    int Populacao2 = 28012;
    float Area2 = 248.42;
    float Pib2 = 2775.1;
    int pontoturisticos2 = 15;
    
    // Entrada de dados
    printf("\nDigite o estado: ");
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

    // Cálculo da segunda carta
    float densidadepopulacional2 = Populacao2 / Area2;
    float PIBpercapita2 = Pib2 / Populacao2;

    // Saída formatada
    printf("\n---- Dados Cadastrados ----\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", Pib2);
    printf("Número de pontos turísticos: %d\n", pontoturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);

    return 0;
}