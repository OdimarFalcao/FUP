# include <stdio.h>
#include  <math.h>

int main(){
    float a,b,c;
    float areaTrianguloRetangulo,areaCirculo,areaTrapezio,areaQuadrado,areaRetangulo;
    scanf("%f %f %f", &a,&b,&c);
    areaTrianguloRetangulo = (a*c)/2;
    areaCirculo = 3.14 * pow(c,2);
    areaTrapezio = ((a+b)*c)/2;
    areaQuadrado = pow(b,2);
    areaRetangulo = a * b;
    printf("%f\n%f\n%f\n%f\n%f\n",areaTrianguloRetangulo,areaCirculo,areaTrapezio,areaQuadrado,areaRetangulo);
}