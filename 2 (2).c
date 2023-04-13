//EXERCÍCIO 2:

#include <stdio.h>
#include <math.h>

double distancia(double x1, double y1, double x2, double y2){
  double total, formula;
  formula = ((x2 - x1)*(x2 - x1)) - ((y2 - y1)*(y2 - y1));
  total = sqrt(formula);
  return total;
}

int main() {
  double x1, x2, y1, y2, resultado;

  printf("\nDistância entre dois pontos:\n");
  
  printf("\nDigite os respectivos valores para os pontos p1(x1,y1) e o ponto p2(x2,y2)\n");
  printf("\nx1 = \t");
  scanf("%lf", &x1);

  printf("\ny1 = \t");
  scanf("%lf", &y1);

  printf("\nx2 = \t");
  scanf("%lf", &x2);

  printf("\ny2 = \t");
  scanf("%lf", &y2);

  resultado = distancia(x1,y1,x2,y2);
  printf("\nA distância entre os pontos p1(%.2lf, %.2lf) e p2(%.2lf, %.2lf) é: %.4lf ", x1,y1,x2,y2,resultado);

  return 0;
    }