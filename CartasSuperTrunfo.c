#include <stdio.h>
/*
Crie um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, 
o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). 
Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

*/

int main() {
  
  int populacao, populacao1, pontotur, pontotur1;
  float areaemKm, areaemKm1, valPib, valPib1;
  char estado, estado1, codCarta[4], codCarta1[4], nomeCidade[50], nomeCidade1[50];
  
  
  printf("--------------------Carta 01--------------------\n");

  // fornecimento de dados para a primeira carta.
      printf("Digite o estado da cidade (A-H): \n");
      scanf("%c", &estado);
      printf("Digite o código da carta (ex: A01): \n");
      scanf("%s", codCarta);
      printf("Digite o nome da cidade: \n"); 
      scanf("%s", nomeCidade);
      printf("Digite a população da cidade: \n ");
      scanf("%d", &populacao);
      printf("Digite a área da cidade em km²: \n ");
      scanf("%f", &areaemKm);
      printf("Digite o PIB da cidade: \n ");
      scanf("%f", &valPib);
      printf("Digite o número de pontos turísticos da cidade: \n ");
      scanf("%d", &pontotur);   

  printf("--------------------Carta 02--------------------\n");
  
  // fornecimento de dados para a segunda carta.
      printf("Digite o estado da cidade (A-H): \n ");
      scanf(" %c", &estado1);
      printf("Digite o código da carta (ex: A01): \n ");
      scanf("%s", codCarta1);
      printf("Digite o nome da cidade: \n ");
      scanf("%s", nomeCidade1);
      printf("Digite a população da cidade: \n  ");
      scanf("%d", &populacao1);
      printf("Digite a área da cidade em km²: \n  ");
      scanf("%f", &areaemKm1);
      printf("Digite o PIB da cidade: \n ");
      scanf("%f", &valPib1);
      printf("Digite o número de pontos turísticos da cidade: \n ");
      scanf("%d", &pontotur1);

  printf("\n--------------------INFOMARCOES DA CARTA 01--------------------\n");
  
    // imprimindo as informações da primeira carta.
      printf("Estado: %c\n", estado);
      printf("Código da Carta: %s\n", codCarta);
      printf("Nome da Cidade: %s\n", nomeCidade);
      printf("População: %d\n", populacao);
      printf("Área (km²): %.2f\n", areaemKm);
      printf("PIB: %.2f\n", valPib);
      printf("Número de Pontos Turísticos: %d\n", pontotur);


  printf("\n--------------------INFOMARCOES DA CARTA 02--------------------\n");

  // imprimindo as informações da segunda carta.
      printf("Estado: %c\n", estado1);
      printf("Código da Carta: %s\n", codCarta1);
      printf("Nome da Cidade: %s\n", nomeCidade1);
      printf("População: %d\n", populacao1);
      printf("Área (km²): %.2f\n", areaemKm1);
      printf("PIB: %.2f\n", valPib1);
      printf("Número de Pontos Turísticos: %d\n", pontotur1);

  printf("\n--------------------------THE END----------------------------\n");





return 0;
} 
