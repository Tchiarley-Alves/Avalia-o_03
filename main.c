#include <stdio.h>
#include <stdlib.h>
#include "MinhaBiblioteca.h"

int main(void) {
  char entrada[30];
  char saida[30];
  char original[1];
  char novo[1];
  
  printf("Digite: Uma palavra, um caracter desta palavra, um caracter substituto, repectivamente.\n");
  scanf("%s", entrada);
  scanf(" %c", original);
  scanf(" %c", novo);

  int quantidadeTrocas = codifica_mensagem(entrada, original[0], novo[0], saida);

  printf("Sua palavra codificada: %s\n", saida);
  printf("Sua palavra original: %s\n", entrada);
  printf("Quantidade de trocas realizadas na palavra: %d\n", quantidadeTrocas);
  
  system("pause");
  return 0;
}