#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10], v2[10];
    int i;

    // LOOP 1: Apenas para leitura dos dados
    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    // LOOP 2: Separado apenas para inverter e passar para o v2
    for(i = 0; i < 10; i++) {
        v2[i] = v1[9 - i]; // Pega do final de v1 e joga no inicio de v2
    }

    // Exibindo os resultados
    printf("\nVetor original (v1): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nVetor invertido (v2): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n\n");

    system("pause");
    return 0;
}
