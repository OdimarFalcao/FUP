#include <stdio.h>
#include <math.h>

int main(void) {
float raio,volume;
scanf("%f",&raio);
volume = ((4*3.14159*pow(raio,3))/3);
printf("%f",volume);
}