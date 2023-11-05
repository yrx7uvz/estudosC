#include <stdio.h>

int main() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num == 5) {
        printf("O número é igual a 5");
    } else if (num == 200) {
        printf("O número é igual a 200");
    } else if (num == 400) {
        printf("O número é igual a 400");
    } else if (num > 500 && num <= 1000) {
        printf("O número está no intervalo entre 500 e 1000");
    } else {
        printf("O número está fora dos escopos anteriores");
    }
    return 0;
}
