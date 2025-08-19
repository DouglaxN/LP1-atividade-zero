#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int opcao;

    printf("Escolha uma opcao:\n");
    printf("1 - Converter Celsius para Fahrenheit\n");
    printf("2 - Converter Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    } 
    else if(opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
    } 
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
