#include <stdio.h>

int main(){
    int valorEmReal,notas100=0,notas50=0,notas20=0,notas10=0,notas5=0,notas2=0,notas1=0;
    scanf("%d",&valorEmReal);
    if(valorEmReal>=100){
        notas100 = valorEmReal / 100;
    } valorEmReal = valorEmReal % 100;

    if(valorEmReal>=50){
        notas50 = valorEmReal / 50;
    } valorEmReal = valorEmReal % 50;

    if(valorEmReal>=20){
        notas20 = valorEmReal / 20;
    } valorEmReal = valorEmReal % 20;
    
    if(valorEmReal>=10){
        notas10 = valorEmReal / 10;
    } valorEmReal = valorEmReal % 10;
    
    if(valorEmReal>=5){
        notas5 = valorEmReal / 5;
    } valorEmReal = valorEmReal % 5;
    
    if(valorEmReal>=2){
        notas2 = valorEmReal / 2;
    } valorEmReal = valorEmReal % 2;
    
    if(valorEmReal>=1){
        notas1 = valorEmReal / 1;
    }
    printf("%d notas de 100\n%d notas de 50\n%d notas de 20\n%d notas de 20\n%d notas de 10\n%d notas de 2\n%d notas de 1\n",notas100,notas50,notas20,notas10,notas5,notas2,notas1);
}