#include <stdio.h>

int main() {
    float a, b, c, d, maior, menor;
    printf("Digite quatro números: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    maior = a;
    menor = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (d > maior) {
        maior = d;
    }
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (d < menor) {
        menor = d;
    }
    printf("O maior valor é %.2f e o menor valor é %.2f", maior, menor);
    return 0;
}
