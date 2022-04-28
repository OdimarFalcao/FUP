#include <stdio.h>
#include <math.h>

int main(void) {
  float raio,area_circulo;
  scanf("%f", &raio);
  area_circulo = 3.14159 * pow(raio,2);
  printf("%f",area_circulo);
}