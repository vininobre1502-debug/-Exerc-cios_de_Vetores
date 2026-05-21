#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i;
    int pares = 0, impares = 0;

    // LOOP 1: Apenas para leitura dos dados
    for(i = 0; i < 10; i++) {
        printf("Digite o numero inteiro %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // LOOP 2: Separado apenas para processar os pares e impares
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d", pares);
    printf("\nQuantidade de numeros impares: %d\n\n", impares);

    system("pause");
    return 0;
}
