#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int PontosTuristicos;
    unsigned long int Populacao;
    float Area;
    float PIB;
    float DensidadePopulacional;
    float PIBpercapita;
    char Codigo[4], Nome[14], Estado[8];
    float SuperPoder;

    printf("*** Cartas SuperTrunfo ***\n");
    printf("\n");   //mero espaço

    //CARTA 1
    printf("Carta 1\n");

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", &Nome);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao);  //%lu para unsigned long int

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    //Calculo dos atributos derivados adicionados posteriormente
    DensidadePopulacional = Populacao / Area;
    PIBpercapita = PIB / Populacao;

    //Calculo do Super Poder
    //Superpoder é a soma de todos os atributos numéricos e o inverso da densidade populacional
    SuperPoder = (float)Populacao + 
                 Area + 
                 PIB + 
                 (float)PontosTuristicos + 
                 PIBpercapita + 
                 (1.0f / DensidadePopulacional);

    //Exibição dos dados abaixo

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %lu\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n", PIBpercapita);
    printf("O super poder é de: %.2f\n", SuperPoder);
    printf("\n");   //mero espaço

    //CARTA 2
    printf("Carta 2\n");

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", &Nome);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao);

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    //Calculo dos atributos derivados adicionados posteriormente
    DensidadePopulacional = Populacao / Area;
    PIBpercapita = PIB / Populacao;

    //Calculo do Super Poder
    //Superpoder é a soma de todos os atributos numéricos e o inverso da densidade populacional
    SuperPoder = (float)Populacao + 
                 Area + 
                 PIB + 
                 (float)PontosTuristicos + 
                 PIBpercapita + 
                 (1.0f / DensidadePopulacional);

    //Exibição dos dados abaixo

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %lu\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n", PIBpercapita);
    printf("O super poder é de: %.2f\n", SuperPoder);
    printf("\n");   //mero espaço
    
     //Comparações

    printf("=== Resultados das Comparações (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");

    printf("População: %d\n", Populacao1 > Populacao2);
    printf("Área: %d\n", Area1 > Area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional (menor vence): %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per capita: %d\n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}