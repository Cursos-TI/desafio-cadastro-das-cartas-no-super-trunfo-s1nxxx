#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cartas SuperTrunfo\n");

    int Populacao, PontosTuristicos;
    float Area, PIB;
    char Codigo[4], Nome[14], Estado[8];

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
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("\n");   //mero espaço

    //Declarações inseridas acima.

    printf("CARTA 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

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
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    //Declarações inseridas acima.

    printf("\n");   //mero espaço

    printf("CARTA 2\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    printf("\n");   //mero espaço
    
    return 0;

}