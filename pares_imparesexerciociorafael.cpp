#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i;
    int pares = 0, impares = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero inteiro %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

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
