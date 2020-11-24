#include <stdio.h>
#include <math.h>

void exam01() {
    double x;
    scanf("%lf", &x);
    printf("pow(x, 1/3) = %lf\n", pow(x, 1.0/3));
}

void exam02() {
    double angle;
    scanf("%lf", &angle);
    printf("Radian = %lf\n", 3.14 * angle / 180);
}

void exam03() {
    int a = 7;
    int b = 3;
    int c;
    // +=, -=, *=
    a += 7;
    int *p = &a;
    (*p)--;
    printf("a = %d, p = %d\n", a, *p);

    a ^= b;
    b ^= a;
    a ^= b;
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    exam01();
    exam02();
    exam03();
    return 0;
}
