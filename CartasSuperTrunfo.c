#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int population1, population2;
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
  printf("Nome da cidade:");
  fgets(name1, sizeof(name1), stdin);
  name1[strcspn(name1, "\n")] = '\0';
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
  name2[strcspn(name2, "\n")] = '\0';
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

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n=================================\n");
  printf("Estado: %c\n", state1);
  printf("Código: %s\n", code1);
  printf("Nome da cidade: %s\n", name1);
  printf("População: %d\n", population1);
  printf("Área: %.2fkm2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turistic_points1);

  printf("\n=================================\nCarta 2: \n=================================\n");
  printf("Estado: %c\n", state2);
  printf("Código: %s\n", code2);
  printf("Nome da cidade: %s\n", name2);
  printf("População: %d\n", population2);
  printf("Área: %.2fkm2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n\n", turistic_points2);
  return 0;
}
