#include <stdio.h>

int gcd(int a, int b) {
    if (!b) {
        return a;
    }
    return gcd(b, a % b);
}


int
main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != -1) {
        printf("gcd(%d, %d)= %d\n", a, b, gcd(a, b));
    }
    return 0;
}
