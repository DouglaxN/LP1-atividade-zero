#include <stdio.h>

int main() {
    int numeros[5];
    int i, soma = 0;

    printf("Digite 5 numeros inteiros:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }

    printf("A soma dos numeros é: %d\n", soma);

    return 0;
}
