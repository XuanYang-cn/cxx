// author: Yangxuan
// email: jumpthepig@gmail.com

#include <stdio.h>
#define swap(a, b) {        \
    __typeof(a) __temp = a; \
    a = b;                  \
    b = __temp;             \
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    char str[1000] = {0}, buffer[1000] = {0}, *p = str, *q = buffer;
    sprintf(str, "%d.%d.%d.%d", 127, 0, 0, 1);
    printf("%s\n", str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(p, q);
    }
    if (n & 2) {
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    if (n & 4) {
        sprintf(q, "{%s}", p);
        swap(p, q);
    }
    printf("%s\n", p);

    FILE *fout = fopen("output", "w");
    fprintf(stdout, "str = %s\n", p);
    return 0;
}
