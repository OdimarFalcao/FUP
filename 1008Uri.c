#include <stdio.h>
#include <math.h>

int main(void) {
  float idfuncionario,horastrabalhadas,valorporhora,salario;
  scanf("%f %f %f",&idfuncionario,&horastrabalhadas,&valorporhora);
  salario= horastrabalhadas*valorporhora;
  printf("%0.f \n",idfuncionario);
  printf("%f",salario);
}