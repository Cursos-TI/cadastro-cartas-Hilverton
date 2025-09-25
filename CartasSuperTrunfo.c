#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int population1, turistic_points1, population2, turistic_points2;
  char state1;
  char state2;
  char code1[3], code2[3], name1[20], name2[20];
  double area1, pib1, area2, pib2;
  // Área para entrada de dados
  printf("Carta 1:\nEstado:\n");
  scanf("%c", &state1);
  printf("Código:\n");
  scanf("%s", &code1);
  printf("Nome da cidade:\n");
  scanf("%s", &name1);
  printf("População:\n");
  scanf("%d", &population1);
  printf("Área:\n");
  scanf("%f", &area1);
  printf("PIB:\n");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos:\n");
  scanf("%d", &turistic_points1);
  // Área para exibição dos dados da cidade
  printf("Cidade: %s\n", &name1);
  return 0;
}
