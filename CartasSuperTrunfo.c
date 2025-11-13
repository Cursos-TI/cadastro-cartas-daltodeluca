#include <stdio.h>

int main() {

  char estado1;
  char codigo1[4];
  char nome1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  char estado2;
  char codigo2[4];
  char nome2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  printf("Super Trunfo - Cidades\n");
  printf("Insira os dados da primeira carta:\n\n");

  printf("Digite o estado (uma letra): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo (ex: A01): ");
  scanf("%3s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome1);
  printf("Digite a populacao: ");
  scanf("%lu", &populacao1);
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
  scanf("%lu", &populacao2);
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

  printf("\nCOMPARAÇÃO DE CARTAS\n\n");

  printf("Carta 1 - %s (%c): %lu habitantes\n", nome1, estado1, populacao1);
  printf("Carta 2 - %s (%c): %lu habitantes\n\n", nome2, estado2, populacao2);

  int resultado;

  if (populacao1 > populacao2) {
      resultado = 1;
      printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
  } else {
      resultado = 2;
      printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
  }

  return 0;
}