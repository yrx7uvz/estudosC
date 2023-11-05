#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num >= 0) {
        printf("A raiz quadrada de %.2f é %.2f", num, sqrt(num));
    } else {
        printf("O quadrado de %.2f é %.2f", num, pow(num, 2));
    }
    return 0;
}
