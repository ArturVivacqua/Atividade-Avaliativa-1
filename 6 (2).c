//EXERCÍCIO 6:

#include <stdio.h>

int main() {
int i, soma = 0;
  for(i = 1; i < 1000; i++){
    if (i % 3 == 0||i % 5 ==0){
     soma = soma + i;
    }
  }
  printf("A soma dos múltiplos de 5 e 3 abaixo de 1000 é igual a %d", soma);
  return 0;
    }