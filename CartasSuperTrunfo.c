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
  unsigned long int populacao, populacao1;
  int pontotur, pontotur1;
  float areaemKm, areaemKm1, valPib, valPib1, denPopulacional, denPopulacional1, pibPerCapita, pibPerCapita1, superpoder, superpoder1;
  char estado, estado1, codCarta[4], codCarta1[4], nomeCidade[50], nomeCidade1[50];
  int compPop, compArea, compPib, comptur, compPibP, compDenPop;
  
  
  
  
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
      


        // calculando a densidade populacional e o PIB per capita para a primeira carta.
      denPopulacional = populacao / areaemKm;
      pibPerCapita = valPib / populacao;
      superpoder = populacao + areaemKm + valPib + pontotur + pibPerCapita + (1.0 / denPopulacional) ;

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
        
      // calculando a densidade populacional e o PIB per capita para a segunda carta.
        denPopulacional1 = populacao1 / areaemKm1;
        pibPerCapita1 = valPib1 / populacao1;
        superpoder1 = populacao1 + areaemKm1 + valPib1 + pontotur1 + pibPerCapita1 + (1.0 / denPopulacional1);
        

  printf("\n--------------------INFOMARCOES DA CARTA 01--------------------\n");
  
    // imprimindo as informações da primeira carta.
      printf("Estado: %c\n", estado);
      printf("Código da Carta: %s\n", codCarta);
      printf("Nome da Cidade: %s\n", nomeCidade);
      printf("População: %d\n", populacao);
      printf("Área (km²): %.2f\n", areaemKm);
      printf("PIB: %.2f\n", valPib);
      printf("Número de Pontos Turísticos: %d\n", pontotur);
      printf("Densidade Populacional: %.2f habitantes/km²\n", denPopulacional);
      printf("PIB per Capita: %.2f\n", pibPerCapita);
      


  printf("\n--------------------INFOMARCOES DA CARTA 02--------------------\n");

  // imprimindo as informações da segunda carta.
        printf("Estado: %c\n", estado1);
        printf("Código da Carta: %s\n", codCarta1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área (km²): %.2f\n", areaemKm1);
        printf("PIB: %.2f\n", valPib1);
        printf("Número de Pontos Turísticos: %d\n", pontotur1);
        printf("Densidade Populacional: %.2f habitantes/km²\n", denPopulacional1);
        printf("PIB per Capita: %.2f\n", pibPerCapita1);

        // comparando as cartas com base no superpoder calculado.
        printf("\n--------------------COMPARAÇÃO DAS CARTAS--------------------\n");

        compPop = populacao > populacao1;
        compArea = areaemKm > areaemKm1;
        compPib = valPib > valPib1;
        comptur = pontotur > pontotur1;
        compPibP = pibPerCapita > pibPerCapita1;  
        compDenPop = denPopulacional > denPopulacional1; 
        



        printf("Comparação de População Carta 01 Maior que Carta 02?  %u \n", compPop);
        printf("Comparação de Área Carta 01 Maior que Carta 02?  %d \n", compArea);
        printf("Comparação de PIB Carta 01 Maior que Carta 02?  %d \n", compPib);
        printf("Comparação de Pontos Turísticos Carta 01 Maior que Carta 02?  %d \n", comptur);
        printf("Comparação de PIB per Capita Carta 01 Maior que Carta 02?  %d \n", compPibP);
        printf("Comparação de Densidade Populacional Carta 01 Maior que Carta 02?  %d \n", compDenPop);
        printf("Comparação de Superpoder Carta 01 Maior que Carta 02?  %d \n", superpoder > superpoder1);

          


  printf("\n--------------------------THE END----------------------------\n");


return 0;
} 
