#include <stdio.h>
#include <string.h>
#include "MinhaBiblioteca.h"

int codifica_mensagem(char *entrada, char caracter1, char caracter2, char *saida)
{
  int qtd = 0;
  int i = 0;
  strcpy(saida, entrada);
  
  while(i < strlen(saida))
  {
    if((entrada)[i] == caracter1){
      (saida)[i] = caracter2; 
      qtd++;
    }
    i++;
  }  
  return qtd;
}