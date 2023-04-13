//EXERCÍCIO 4:

#include <stdio.h>

int main() {
  double x, y;

  printf("\nDigite as cordenadas de um ponto p(x,y):\n");
  printf("\nx = \t");
  scanf("%lf", &x);

  printf("\ny = \t");
  scanf("%lf", &y);

  if (x == 0 && y == 0){
    printf("\nO ponto p(%.2lf,%.2lf) é a origem do plano cartesiano.", x,y);
  }else if (x > 0 && y > 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no primeiro quadrante do plano cartesiano.", x,y);
  }else if (x < 0 && y > 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no segundo quadrante do plano cartesiano.", x,y);
  }else if (x < 0 && y < 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no terceiro quadrante do plano cartesiano.", x,y);
  }else if (x > 0 && y < 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no quarto quadrante do plano cartesiano.", x,y);
  }else if (x == 0 && y != 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no eixo Y do plano cartesiano.", x,y);
  }else if (x != 0 && y == 0){
    printf("\nO ponto p(%.2lf,%.2lf) está no eixo X do plano cartesiano.", x,y);
  }

  return 0;
    }