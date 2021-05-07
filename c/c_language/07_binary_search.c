#include <stdio.h>
int f(int x) {
    return x * x;
}

double s(double x) {
    return x * x;
}

#define EPSIL 1e-7
double binary_search(double (*arr)(double), double target) {
    double head = 0;
    double tail = target;
    double mid;
    if ( target < 1.0 ) tail = 1.0;
    while ( tail - head > EPSIL ) {
        mid = (head + tail) / 2;
        if (arr(mid) == target) { return mid; }
        if (arr(mid) < target) {
            head = mid;
        } else {
            tail = mid;
        }
    }
    return head;
}

/* int binary_search(int *arr, int length, int target) { */
/*     int head = 0; */
/*     int tail = length - 1; */
/*     int mid; */ /*     while (head <= tail) { */
/*         mid = (head + tail) >> 1; */
/*         if (arr[mid] == target) { return mid; } */
/*         if (arr[mid] < target) { */
/*             head = mid + 1; */
/*         } else { */
/*             tail = mid - 1; */
/*         } */
/*     } */
/*     return -1; */
/* } */

int binary_search_function(int (*arr)(int), int length, int target) {
    int head = 0;
    int tail = length - 1;
    int mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr(mid) == target) { return mid; }
        if (arr(mid) < target) {
            head = mid + 1;
        } else {
            tail = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[0];
    for (int i =0; i < 100; i++) {
        arr[i] = i * i;
    }

    double target;
    while (~scanf("%lf", &target)) {
        /* int ans = binary_search(arr, 100, target); */
        double ans = binary_search(s, target);
        printf("ask for target: %.4lf, search back target ans = %.4lf, ans * ans = %.4lf\n", target, ans, ans*ans);
    }
    return 0;
}
