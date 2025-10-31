#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Trabalho de nivel novato:

int main() {

   // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[3],Estado_2[3],Nome_da_Cidade[25], Nome_da_Cidade_2[25];

  int Codigo_da_Carta,Codigo_da_Carta_2,Populacao,Populacao_2,Pontos_Turisticos,Pontos_Turisticos_2;  

  float Area,Area_2,PIB,PIB_2;

  // Área para entrada de dados
  printf("**Registre sua Primeira Carta**\n");

  printf("Estado, de A à H:\n");
  scanf("%1s", Estado);

  printf("Código da Carta de 01 à 04:\n");
  scanf("%2d", &Codigo_da_Carta);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]", Nome_da_Cidade);

  printf("População:\n");
  scanf("%d", &Populacao);

  printf("Área (em km²):\n");
  scanf("%f", &Area);

  printf("PIB:\n");
  scanf("%f", &PIB);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &Pontos_Turisticos);

  // Segunda entrada de dados
  printf("------------------------------\n");
  printf("**Registre sua Segunda Carta**\n");
  printf("-------------------------------\n");

  
  printf("Estado, de A à H:\n");
  scanf("%1s", Estado_2);

  printf("Código da Carta de 01 à 04:\n");
  scanf("%2d", &Codigo_da_Carta_2);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]", Nome_da_Cidade_2);

  printf("População:\n");
  scanf("%d", &Populacao_2);

  printf("Área (em km²):\n");
  scanf("%f", &Area_2);

  printf("PIB:\n");
  scanf("%f", &PIB_2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &Pontos_Turisticos_2);
// Área para exibição dos dados da cidade
 
  printf("--------------------------------\n");
  printf("Carta: 1 \nEstado: %s\nCódigo: %s%02d\nNome da Cidade: %s\n"
       "População: %d\nÁrea: %.2f Km²\nPIB: R$ %.2f \nNúmero de Pontos Turísticos: %d\n",
       Estado,Estado,Codigo_da_Carta,Nome_da_Cidade,Populacao,Area,PIB,Pontos_Turisticos);

  float Densidade_p = (float) Populacao / Area;
  float PIB_pc = (float) PIB / Populacao;

  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_p);
  printf("PIB per capita: %.2f reais\n", PIB_pc);
  printf("--------------------------------\n");  

  //Segunda saida de dados
  
  printf("Carta: 2 \nEstado: %s\nCódigo: %s%02d\nNome da Cidade: %s\n"
       "População: %d\nÁrea: %.2f Km²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %d\n",
       Estado_2,Estado_2,Codigo_da_Carta_2,Nome_da_Cidade_2,Populacao_2,Area_2,PIB_2,Pontos_Turisticos_2);

  float Densidade_p2 = (float) Populacao_2 / Area_2;
  float PIB_pc_2 = (float) PIB_2 / Populacao_2;
  
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_p2);
  printf("PIB per capita: %.2f reais\n", PIB_pc_2);

  printf("--------------------------------\n");

return 0;
} 