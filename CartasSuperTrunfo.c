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
  printf("Escolha o PRIMEIRO atributo:\n\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Demográfica\n");
  printf("6 - PIB per Capita\n\n");

  int atributo1, atributo2;
  printf("Digite sua opção: ");
  scanf("%d", &atributo1);

  printf("\nEscolha o SEGUNDO atributo:\n\n");

  for (int i = 1; i <= 6; i++) {
      if (i != atributo1) {
          switch(i) {
              case 1: printf("1 - População\n"); break;
              case 2: printf("2 - Área\n"); break;
              case 3: printf("3 - PIB\n"); break;
              case 4: printf("4 - Pontos Turísticos\n"); break;
              case 5: printf("5 - Densidade Demográfica\n"); break;
              case 6: printf("6 - PIB per Capita\n"); break;
          }
      }
  }

  printf("\nDigite sua opção: ");
  scanf("%d", &atributo2);

  float valor1_c1, valor1_c2;
  float valor2_c1, valor2_c2;

  switch(atributo1) {
      case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
      case 2: valor1_c1 = area1; valor1_c2 = area2; break;
      case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
      case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
      case 5: valor1_c1 = densidadePopulacional1; valor1_c2 = densidadePopulacional2; break;
      case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
      default: printf("Opção inválida\n"); return 0;
  }

  switch(atributo2) {
      case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
      case 2: valor2_c1 = area1; valor2_c2 = area2; break;
      case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
      case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
      case 5: valor2_c1 = densidadePopulacional1; valor2_c2 = densidadePopulacional2; break;
      case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
      default: printf("Opção inválida\n"); return 0;
  }

  int ponto1 = (atributo1 == 5) ? (valor1_c1 < valor1_c2 ? 1 : (valor1_c2 < valor1_c1 ? 0 : -1))
                                : (valor1_c1 > valor1_c2 ? 1 : (valor1_c2 > valor1_c1 ? 0 : -1));

  int ponto2 = (atributo2 == 5) ? (valor2_c1 < valor2_c2 ? 1 : (valor2_c2 < valor2_c1 ? 0 : -1))
                                : (valor2_c1 > valor2_c2 ? 1 : (valor2_c2 > valor2_c1 ? 0 : -1));

  float soma1 = valor1_c1 + valor2_c1;
  float soma2 = valor1_c2 + valor2_c2;

  printf("\nCOMPARAÇÃO DE CARTAS\n\n");

  printf("Carta 1 - %s\n", nome1);
  printf("Carta 2 - %s\n\n", nome2);

  printf("Primeiro atributo: %.2f (Carta 1) x %.2f (Carta 2)\n", valor1_c1, valor1_c2);
  printf("Segundo atributo: %.2f (Carta 1) x %.2f (Carta 2)\n\n", valor2_c1, valor2_c2);

  printf("Soma dos atributos:\n");
  printf("%s: %.2f\n", nome1, soma1);
  printf("%s: %.2f\n\n", nome2, soma2);

  if (soma1 > soma2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
  } else if (soma2 > soma1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
  } else {
      printf("Empate!\n");
  }

  return 0;
}