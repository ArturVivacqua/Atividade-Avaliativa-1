//EXERCÍCIO 8:

#include <stdio.h>

int main() {
    int n, maior, menor;

    printf("\nDigite um número natural positivo (para sair digite um número negativo):\t");
    scanf("%d", &n);

    maior = n;
    menor = n;
  
    while (n>=0){
     if(n > maior) {
      maior = n;
    }
     if(n < menor) {
      menor = n;
    }
     printf("\nDigite um número natural positivo (para sair digite um número negativo):\t");
    scanf("%d", &n);

    }
   printf("\nO maior número lido foi: %d\n", maior);
   printf("\nO menor número lido foi: %d\n", menor);

   
    return 0;
}