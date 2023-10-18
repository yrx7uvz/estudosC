#include <stdio.h>

int main() {
    int idade;
    float salario, altura, peso;
    float salarioM = 1350.00;


    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    // verifica se a idade >= 18
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa não é maior de idade.\n");
    }

    // verifica se salario > que salarioM
    if (salario > salarioM) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa não ganha mais que o salário mínimo.\n");
    }

    // verifica se altura > 1.8m
    if (altura > 1.8) {
        printf("A pessoa é mais alta que 1.8 metros.\n");
    } else {
        printf("A pessoa não é mais alta que 1.8 metros.\n");
    }

    // verifica se peso < 60kg
    if (peso < 60) {
        printf("O peso da pessoa é menor que 60 kg.\n");
    } else {
        printf("O peso da pessoa não é menor que 60 kg.\n");
    }

    return 0;
}
