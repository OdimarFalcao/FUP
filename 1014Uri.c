#include <stdio.h>
int main(){
    int a,b,c,maiorAb,maiorABC;
    scanf("%d %d %d",&a,&b,&c);
    maiorAb = ((a+b+abs(a-b))/2);
    maiorABC = ((maiorAb+c+abs(maiorAb-c))/2);
    printf("%d",maiorABC);

}