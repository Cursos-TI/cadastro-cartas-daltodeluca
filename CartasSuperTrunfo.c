#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1;
  char codigo1[4];
  char nome1[50];
  int  populacao1;
  float area1;
  float pib1;
  int  pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  char estado2;
  char codigo2[4];
  char nome2[50];
  int  populacao2;
  float area2;
  float pib2;
  int  pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  // Área para entrada de dados

  printf("Super Trunfo - Cidades\n");
  printf("Insira os dados da primeira carta:\n\n");

  printf("Digite o estado (uma letra): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo (ex: A01): ");
  scanf("%3s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome1);
  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  printf("Digite a area (em km2): ");
  scanf("%f", &area1);
  printf("Digite o PIB (em bilhoes): ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);  

  printf("\nInsira os dados da segunda carta:\n\n");
  printf("Digite o estado (uma letra): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo (ex: A01): ");
  scanf("%3s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome2);
  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  printf("Digite a area (em km2): ");
  scanf("%f", &area2);
  printf("Digite o PIB (em bilhoes): ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;

  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Área para exibição dos dados da cidade

  printf("\nComparacao entre as duas cartas:\n");

  printf("\n- Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n- Carta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
} 
