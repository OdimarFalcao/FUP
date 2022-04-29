#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, contador = 0, troca, copia, vetor[3];

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        scanf("%d",&vetor[i]);
    }

    printf("Antes da ordenacao:\n");
    for(i = 0; i < 3; i++){
        printf("%3d ", vetor[i]);
    }

    do{
        troca = 0;
        contador++; 
        for(i = 0; i < 2; i++){ 
            if(vetor[i] > vetor[i+1]){ 
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nApos a ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 3; i++){
        printf("%3d ", vetor[i]);
    }

    return 0;
}