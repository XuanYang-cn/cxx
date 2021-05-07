// author: Yangxuan
// email: jumpthepig@gmail.com

#include <stdio.h>

void test_return_of_printf() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf(" has number of chars write: %d\n", printf("%d", n));
    }
}

void test_return_of_scanf() {
    char str[100];
    while (scanf("%[^\n]", str)  != EOF) {
        getchar();
        printf(" has %d number of chars read\n", printf("%s", str));
    }

}

int main() {
    /** printf("==test return of printf==\n"); */
    /** test_return_of_printf(); */
    printf("==test return of scanf==\n");
    test_return_of_scanf();
    return 0;
};
