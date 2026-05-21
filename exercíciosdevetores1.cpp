#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    float soma = 0, media;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    
    media = soma / 10;

    printf("\nA media dos valores eh: %.2f\n\n", media);

    system("pause");
    return 0;
}
