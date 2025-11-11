#include <stdio.h>
#include <string.h> 
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Trabalho de nivel novato:

int main() {

   // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[3],Estado_2[3],Nome_da_Cidade[25], Nome_da_Cidade_2[25];

  unsigned long int Populacao,Populacao_2;

  int Codigo_da_Carta,Codigo_da_Carta_2,Pontos_Turisticos,Pontos_Turisticos_2;  

  float Area,Area_2,PIB,PIB_2;

  int comparacao1,comparacao2,comparacao3;

  char escolha[20],escolha2[20],escolha3[20];


  // Área para entrada de dados
  printf("**Registre sua Primeira Carta**\n");

  printf("Estado, de A à H:\n");
  scanf("%1s", Estado);

  printf("Código da Carta de 01 à 04:\n");
  scanf("%2d", &Codigo_da_Carta);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]", Nome_da_Cidade);

  printf("População:\n");
  scanf("%lu", &Populacao);

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
  scanf("%lu", &Populacao_2);

  printf("Área (em km²):\n");
  scanf("%f", &Area_2);

  printf("PIB:\n");
  scanf("%f", &PIB_2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &Pontos_Turisticos_2);

//----------------------------------------------------------------------------------------------------------------------------------------------------
// Área para exibição dos dados da cidade
 
  printf("--------------------------------\n");
  printf("Carta: 1 \nEstado: %s\nCódigo: %s%02d\nNome da Cidade: %s\n"
       "População: %lu\nÁrea: %.2f Km²\nPIB: R$ %.2f \nNúmero de Pontos Turísticos: %d\n",
       Estado,Estado,Codigo_da_Carta,Nome_da_Cidade,Populacao,Area,PIB,Pontos_Turisticos);

  float Densidade_p = (float) Populacao / Area;
  float PIB_pc = (float) PIB / Populacao;

  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_p);
  printf("PIB per capita: %.2f reais\n", PIB_pc);

  float SuperPoder;
  SuperPoder = Populacao + Area + PIB + Pontos_Turisticos + PIB_pc + (1.0 / Densidade_p);

  printf("Super Poder: %.2f\n",SuperPoder);

  printf("--------------------------------\n");  

  //Segunda saida de dados
  
  printf("Carta: 2 \nEstado: %s\nCódigo: %s%02d\nNome da Cidade: %s\n"
       "População: %lu\nÁrea: %.2f Km²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %d\n",
       Estado_2,Estado_2,Codigo_da_Carta_2,Nome_da_Cidade_2,Populacao_2,Area_2,PIB_2,Pontos_Turisticos_2);

  float Densidade_p2 = (float) Populacao_2 / Area_2;
  float PIB_pc_2 = (float) PIB_2 / Populacao_2;
  
  printf("Densidade Populacional: %.2f hab/km²\n", Densidade_p2);
  printf("PIB per capita: %.2f reais\n", PIB_pc_2);

  float SuperPoder2;
  SuperPoder2 = Populacao_2 + Area_2 + PIB_2 + Pontos_Turisticos_2 + PIB_pc_2 + (1.0 / Densidade_p2);

  printf("Super Poder: %.2f\n",SuperPoder2);

  printf("--------------------------------\n");

  //Escolha de comparações
  printf("Escolha o Primeiro atributo a se comparar\n");
  printf("[1] População\n[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per capíta\n[7] Super Poder\n");
  scanf("%d", &comparacao1);


  switch (comparacao1){
    case 1:
        printf("Você escolheu [1] População\n");
        comparacao1 = Populacao > Populacao_2 ? 1 : 0;
        strcpy(escolha,"População");
        break;
    case 2:
        printf("Você escolheu [2] Área\n");
        comparacao1 = Area > Area_2 ? 1 : 0;
        strcpy(escolha,"Área");
        break;
    case 3:
        printf("Você escolheu [3] PIB\n");
        comparacao1 = PIB > PIB_2  ? 1 : 0;
        strcpy(escolha,"PIB\n");
        break;
    case 4:
        printf("Você escolheu [4] Pontos Turísticos\n");
        comparacao1 = Pontos_Turisticos > Pontos_Turisticos_2 ? 1 : 0;
        strcpy(escolha,"Pontos Turísticos");
        break;
    case 5:
        printf("Você escolheu [5] Densidade Populacional\n");
        comparacao1 = Densidade_p < Densidade_p2 ? 1 : 0;
        strcpy(escolha,"Densidade");
        break;
    case 6:
        printf("Você escolheu [6] PIB per capíta\n");
        comparacao1 = PIB_pc > PIB_pc_2  ? 1 : 0;
        strcpy(escolha,"PIB per capíta");
        break;
    case 7:
        printf("Você escolheu [7] Super Poder\n");
        comparacao1 = SuperPoder > SuperPoder2 ? 1 : 0;
        strcpy(escolha,"Super Poder");
        break;
    default:
        printf("Escolha Inválida\n");
        break;
  }

  ///Segunda escolha de comparação
  printf("Escolha o Segundo atributo a se comparar\n");
  printf("[1] População\n[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per capíta\n[7] Super Poder\n");
  scanf("%d", &comparacao2);


  switch (comparacao2){
    case 1:
        printf("Você escolheu [1] População\n");
        comparacao2 = Populacao > Populacao_2 ? 1 : 0;
        strcpy(escolha2,"População");
        break;
    case 2:
        printf("Você escolheu [2] Área\n");
        comparacao2 = Area > Area_2 ? 1 : 0;
        strcpy(escolha2,"Área");
        break;
    case 3:
        printf("Você escolheu [3] PIB\n");
        comparacao2 = PIB > PIB_2  ? 1 : 0;
        strcpy(escolha2,"PIB");
        break;
    case 4:
        printf("Você escolheu [4] Pontos Turísticos\n");
        comparacao2 = Pontos_Turisticos > Pontos_Turisticos_2 ? 1 : 0;
        strcpy(escolha2,"Pontos Turísticos");
        break;
    case 5:
        printf("Você escolheu [5] Densidade Populacional\n");
        comparacao2 = Densidade_p < Densidade_p2 ? 1 : 0;
        strcpy(escolha2,"Densidade");
        break;
    case 6:
        printf("Você escolheu [6] PIB per capíta\n");
        comparacao2 = PIB_pc > PIB_pc_2  ? 1 : 0;
        strcpy(escolha2,"PIB per capíta");
        break;
    case 7:
        printf("Você escolheu [7] Super Poder\n");
        comparacao2 = SuperPoder > SuperPoder2 ? 1 : 0;
        strcpy(escolha2,"Super Poder");
        break;
    default:
        printf("Escolha Inválida\n");
        break;
  }
if (comparacao1 == comparacao2) {
    printf("Escolha repetida! Escolha outro atributo.\n");
    scanf("%d", &comparacao2);
}

  //terceira comparação:
  printf("Escolha o Terceiro atributo a se comparar\n");
  printf("[1] População\n[2] Área\n[3] PIB\n[4] Pontos Turísticos\n[5] Densidade Populacional\n[6] PIB per capíta\n[7] Super Poder\n");
  scanf("%d", &comparacao3);


  switch (comparacao3){
    case 1:
        printf("Você escolheu [1] População");
        comparacao3 = Populacao > Populacao_2 ? 1 : 0;
        strcpy(escolha3,"População");
        break;
    case 2:
        printf("Você escolheu [2] Área");
        comparacao3 = Area > Area_2 ? 1 : 0;
        strcpy(escolha3,"Área");
        break;
    case 3:
        printf("Você escolheu [3] PIB");
        comparacao3 = PIB > PIB_2  ? 1 : 0;
        strcpy(escolha3,"PIB\n");
        break;
    case 4:
        printf("Você escolheu [4] Pontos Turísticos\n");
        comparacao3 = Pontos_Turisticos > Pontos_Turisticos_2 ? 1 : 0;
        strcpy(escolha3,"Pontos Turísticos");
        break;
    case 5:
        printf("Você escolheu [5] Densidade Populacional\n");
        comparacao3 = Densidade_p < Densidade_p2 ? 1 : 0;
        strcpy(escolha3,"Densidade");
        break;
    case 6:
        printf("Você escolheu [6] PIB per capíta\n");
        comparacao3 = PIB_pc > PIB_pc_2  ? 1 : 0;
        strcpy(escolha3,"PIB per capíta");
        break;
    case 7:
        printf("Você escolheu [7] Super Poder\n");
        comparacao3 = SuperPoder > SuperPoder2 ? 1 : 0;
        strcpy(escolha3,"Super Poder");
        break;
    default:
        printf("Escolha Inválida\n");
        break;
  }
if (comparacao2 == comparacao3) {
    printf("Escolha repetida! Escolha outro atributo.\n");
    scanf("%d", &comparacao3);
}


  ///////comparação escolhida:
  printf("--------------------------------\n");
  printf("-------Comparação de atributos!-------\n");
  if (comparacao1 == 1){
    printf("A PRIMEIRA carta VENCEU em %s\n", escolha);
  }else {
    printf("A SEGUNDA carta VENCEU em %s\n", escolha);
  }
  printf("--------------------------------\n");
  if (comparacao2 == 1){
    printf("A PRIMEIRA carta VENCEU em %s\n", escolha2);
  }else {
    printf("A SEGUNDA carta VENCEU em %s\n", escolha2);
  }
  printf("--------------------------------\n");
    if (comparacao3 == 1){
    printf("A PRIMEIRA carta VENCEU em %s\n", escolha3);
  }else {
    printf("A SEGUNDA carta VENCEU em %s\n", escolha3);
  }
  printf("--------------------------------\n");


return 0;
} 