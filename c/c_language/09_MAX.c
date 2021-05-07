#include <stdio.h>

#define Max(a, b) ({\
    __typeof(a) _a= (a); \
    __typeof(b) _b= (b); \
    _a > _b ? _a : _b;\
})


int main() {
    printf("Max(2,3) = %d\n", Max(2, 3));
    printf("5 + Max(2,3) = %d\n", 5 + Max(2, 3));
    printf("Max(2,Max(3, 4)) = %d\n", Max(2, Max(3, 4)));
    printf("Max(2, 3 > 4 ? 3: 4) = %d\n", Max(2, 3 > 4 ? 3 : 4));

    int a = 7;
    printf("Max(a++, 6) = %d\n", Max(a++, 6));
    return 0;
}
