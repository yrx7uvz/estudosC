#include <stdio.h>

int main() {
    float a, b, c, temp;
    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Os números em ordem decrescente são %.2f, %.2f e %.2f", a, b, c);
    return 0;
}
