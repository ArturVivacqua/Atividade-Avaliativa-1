//EXERCÍCIO 1:

#include <stdio.h>

int diferenca(int x, int y, int z, int w){
  int total = (x*y) - (z*w);
  return total;
}

int main(void) {
  int a, b, c, d, resultado;

  printf("\nDigite 4 valores inteiros:\n");
  
  printf("\nDigite o valor de A:\t");
  scanf("%d", &a);

  printf("\nDigite o valor de B:\t");
  scanf("%d", &b);

  printf("\nDigite o valor de C:\t");
  scanf("%d", &c);

  printf("\nDigite o valor de D:\t");
  scanf("%d", &d);

  resultado = diferenca(a,b,c,d);
  printf("\nDIFERENCA = (%d * %d)-(%d * %d)\n", a,b,c,d);
  printf("\nDIFERENCA = %d", resultado);

  return 0;
}