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

  printf("\nMENU DE ATRIBUTOS\n");
  printf("Escolha um atributo para comparar:\n\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Demográfica\n");
  printf("6 - PIB per Capita\n\n");

  int opcao;
  printf("Digite sua opção: ");
  scanf("%d", &opcao);

  printf("\nCOMPARAÇÃO DE CARTAS\n\n");

  switch(opcao) {

      case 1: 
          printf("Atributo: População\n\n");
          printf("Carta 1 - %s: %lu habitantes\n", nome1, populacao1);
          printf("Carta 2 - %s: %lu habitantes\n\n", nome2, populacao2);

          if (populacao1 > populacao2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (populacao2 > populacao1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      case 2: 
          printf("Atributo: Área\n\n");
          printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
          printf("Carta 2 - %s: %.2f km²\n\n", nome2, area2);

          if (area1 > area2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (area2 > area1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      case 3: 
          printf("Atributo: PIB\n\n");
          printf("Carta 1 - %s: %.2f bilhões\n", nome1, pib1);
          printf("Carta 2 - %s: %.2f bilhões\n\n", nome2, pib2);

          if (pib1 > pib2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (pib2 > pib1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      case 4: 
          printf("Atributo: Pontos Turísticos\n\n");
          printf("Carta 1 - %s: %d pontos\n", nome1, pontosTuristicos1);
          printf("Carta 2 - %s: %d pontos\n\n", nome2, pontosTuristicos2);

          if (pontosTuristicos1 > pontosTuristicos2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (pontosTuristicos2 > pontosTuristicos1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      case 5: 
          printf("Atributo: Densidade Demográfica\n\n");
          printf("Carta 1 - %s: %.2f hab/km²\n", nome1, densidadePopulacional1);
          printf("Carta 2 - %s: %.2f hab/km²\n\n", nome2, densidadePopulacional2);

          if (densidadePopulacional1 < densidadePopulacional2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (densidadePopulacional2 < densidadePopulacional1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      case 6: 
          printf("Atributo: PIB per Capita\n\n");
          printf("Carta 1 - %s: %.2f reais\n", nome1, pibPerCapita1);
          printf("Carta 2 - %s: %.2f reais\n\n", nome2, pibPerCapita2);

          if (pibPerCapita1 > pibPerCapita2) {
              printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
          } else if (pibPerCapita2 > pibPerCapita1) {
              printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
          } else {
              printf("Empate!\n");
          }
      break;

      default:
          printf("Opção inválida\n");
      break;
  }

  return 0;
}