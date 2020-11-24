#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test01(int n) {
    switch (n) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("error\n");
            break;
    }
}

void test02(int n) {
    switch (n) {
        case 1:
            printf("one ");
        case 2:
            printf("two ");
        case 3:
            printf("three");
            break;
        default:
            printf("error\n");
            break;
    }
}

void test04() {
    int n = 100;
    while (n > 0) {
        printf("%d ", n);
        n--;
    }
    printf("\n");

    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
}

void struct_program() {

    int n, cnt;
    scanf("%d", &n);
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        //if (val % 2) {
        //if (val & 1) 按位与 1 等于对 2 取余。
        //    cnt += 1;
        //}
        cnt += (val & 1);
//        if ( i != 0 ) {
//            printf(" ");
//        }
        i && printf(" ");

        printf("%d", val);
    }
}

void Palindrome() {
    int n;
    scanf("%d", &n);

    if (n < 0) return;
    int x = n;
    int temp = 0;
    while (x) {
        temp = 10 * temp + x % 10;
        x /= 10;
    }
    
    if (temp - n) {
        printf("%d is not palindrome\n", n);
    } else {
        printf("%d is palindrome\n", n);
    }

}

int main() {
    /* int n; */
    /* scanf("%d", &n); */

    /* test01(n); */
    /* test02(n); */
    /* test04(); */
    /* struct_program(); */
    Palindrome();

    return 0;
}
