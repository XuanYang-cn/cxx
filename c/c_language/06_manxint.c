#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

double average(int num, ...) {
    va_list valist;
    double sum = 0.0;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (int i = 0; i < num; ++i) {
        sum += va_arg(valist, int);
    }

    /* clean memory reserved for valist */
    va_end(valist);

    return sum/num;
}

int max_int(int n, ...) {
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, n);

    while(n--) {
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }

    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 1, 5, 10));
    printf("%d\n", max_int(2, 1, 3));
    printf("%d\n", max_int(6, 1, 3, 5, 7, 13, 15, 17));
    printf("Average of 2, 3, 4, 5 = %.4f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10 = %.4f\n", average(2, 5, 10));
    return 0;
}
