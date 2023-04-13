//EXERCÍCIO 5:

#include <stdio.h>

int main() {
  int n;

  printf("\nDigite um número positivo:\n");
  scanf("%d", &n);

  printf("\nDivisores de %d: ", n);
  for(int i = 1; i <= n; i++){
    if (n % i == 0){
     printf("%d\t", i);
    }
  }

  return 0;
    }