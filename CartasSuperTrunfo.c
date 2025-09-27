#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  unsigned long int population1, population2;
  int turistic_points1, turistic_points2;
  char state1;
  char state2;
  char code1[3];
  char code2[3];
  char name1[50];
  char name2[50];
  double area1, pib1, area2, pib2;

  // Área para entrada de dados
  printf("Carta 1:\n=================================\n");
  printf("Nome da cidade:\n");
  fgets(name1, sizeof(name1), stdin);
  name1[strcspn(name1, "\n")] = '\n';
  getchar();
  printf("Estado: \n");
  scanf("%s", &state1);
  printf("Código:\n");
  scanf("%s", &code1);
  printf("População:\n");
  scanf("%d", &population1);
  printf("Área:\n");
  scanf("%lf", &area1);
  printf("PIB:\n");
  scanf("%lf", &pib1);
  printf("Número de Pontos Turísticos:\n");
  scanf("%d", &turistic_points1);

  getchar();

  printf("\nCarta 2:\n=================================\n");
  printf("Nome da cidade:\n");
  fgets(name2, sizeof(name2), stdin);
  name2[strcspn(name2, "\n")] = '\n';
  getchar();
  printf("Estado: \n");
  scanf("%s", &state2);
  printf("Código:\n");
  scanf("%s", &code2);
  printf("População:\n");
  scanf("%d", &population2);
  printf("Área:\n");
  scanf("%lf", &area2);
  printf("PIB:\n");
  scanf("%lf", &pib2);
  printf("Número de Pontos Turísticos:\n");
  scanf("%d", &turistic_points2);

  // Cáclculo da densidade populacional
  double density1 = population1 / area1;
  double density2 = population2 / area2;

  // Cáluculo do PIB per capita
  double pib_per_capita1 = (pib1 * 1e9) / population1;
  double pib_per_capita2 = (pib2 * 1e9) / population2;

  // Cálculo do Super Poder
  double superpoder1 = (float)population1 + area1 + (pib1 * 1.0E9F) + (float)turistic_points1 + pib_per_capita1 + (1.0f / density1);
  double superpoder2 = (float)population2 + area2 + (pib2 * 1.0E9F) + (float)turistic_points2 + pib_per_capita2 + (1.0f / density2);

  // Área para exibição dos dados da cidade
  printf("\n=================================\nCarta 1: \n=================================\n");
  printf("Estado: %c\n", state1);
  printf("Código: %s\n", code1);
  printf("Nome da cidade: %s\n", name1);
  printf("População: %d\n", population1);
  printf("Área: %.2fkm2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turistic_points1);
  printf("Densidade demográfica da cidade 1: %.2f habitantes/km2\n", density1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  printf("\n=================================\nCarta 2: \n=================================\n");
  printf("Estado: %c\n", state2);
  printf("Código: %s\n", code2);
  printf("Nome da cidade: %s\n", name2);
  printf("População: %d\n", population2);
  printf("Área: %.2fkm2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n\n", turistic_points2);
  printf("Densidade demográfica da cidade 2: %.2f habitantes/km2\n\n", density2);
  printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);

  printf("\n=================================\nComparacao de cartas: \n=================================\n");
  int vitoria1 = 0, vitoria2 = 0;

  printf("População: ");
  if (population1 > population2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (population2 > population1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }
  printf("Área: ");
  if (area1 > area2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (area2 > area1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("PIB: ");
  if (pib1 > pib2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (pib2 > pib1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("Pontos Turísticos: ");
  if (turistic_points1 > turistic_points2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (turistic_points2 > turistic_points1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("Densidade Populacional: ");
  if (density1 < density2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (density2 < density1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("PIB per Capita: ");
  if (pib_per_capita1 > pib_per_capita2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (pib_per_capita2 > pib_per_capita1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("Super Poder: ");
  if (superpoder1 > superpoder2) {
    printf("Carta 1 venceu (1)\n");
    vitoria1++;
  } else if (superpoder2 > superpoder1) {
    printf("Carta 2 venceu (0)\n");
    vitoria2++;
  }

  printf("\nResultado final\n");
  if (vitoria1 > vitoria2) {
    printf(">>> Carta 1 é a vencedora!\n");
  } else if (vitoria2 > vitoria1) {
    printf(">>> Carta 2 é a vencedora!\n");
  } else {
    printf(">>> Empate!\n");
  }

  return 0;
}
