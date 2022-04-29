#include <stdio.h>
#include <math.h>

int main(void) {
  float nomefuncionario,salariofixo,totaldevendas,salariomaiscomissao;
  scanf("%s %f %f",&nomefuncionario,&salariofixo,&totaldevendas);
  salariomaiscomissao= salariofixo + ((totaldevendas*15)/100);
  printf("%.2f",salariomaiscomissao);
}