//EXERCÍCIO 10:

#include <stdio.h>

int main() {
 float n, soma = 0, media;

   printf("\nMédia de 10 números:");

  for(int i = 0; i < 10; i++){
    printf("\nDigite um número:\t");
    scanf("%f", &n);

    soma = soma + n;
  }
  media = soma/10;
  printf("\nMédia = %.2f", media);
return 0;
}