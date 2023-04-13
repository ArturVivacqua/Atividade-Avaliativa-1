//EXERCÍCIO 7:

#include <stdio.h>

int main() {
    int i, n, a = 0, b = 1, t;

    printf("Digite um número natural: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("%d", a);
    } else if (n == 1) {
        printf("%d", b);
    } else {
        for (i = 2; i <= n; i++) {
            t = a + b;
            a = b;
            b = t;
        }
        printf("%d", b);
    }

    return 0;
}