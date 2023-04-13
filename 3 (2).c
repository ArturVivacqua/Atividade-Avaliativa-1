//EXERCÍCIO 3:

#include <stdio.h>

double volume(double r){
  double total = (4/3.0)* 3.14159 * (r*r*r);
  return total;
}

double area(double r){
  double total = 4 *  3.14159 * (r*r);
  return total;
}

int main() {
  double raio, a, v;

  printf("\nÁrea da superfície e volume de uma esfera:\n");
  
  printf("\nDigite o raio da esfera:\t");
  scanf("%lf", &raio);

  a = area(raio);
  v = volume(raio);
  printf("\n Área = %.2lf\n", a);
  printf("\n Volume = %.2lf\n", v);

  return 0;
    }