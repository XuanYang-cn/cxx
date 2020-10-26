#include <stdio.h>
int f(int x) {
    return x * x;
}

double s(double x) {
    return x * x;
}


double binary_search(double (*arr)(double), double target) {
    double head = 0;
    double tail = x;
    double mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == target) { return mid; }
        if (arr[mid] < target) {
            head = mid + 1;
        } else {
            tail = mid - 1;
        }
    }
    return -1;
}

/* int binary_search(int *arr, int length, int target) { */
/*     int head = 0; */
/*     int tail = length - 1; */
/*     int mid; */
/*     while (head <= tail) { */
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

    int target;
    while (~scanf("%d", &target)) {
        /* int ans = binary_search(arr, 100, target); */
        int ans = binary_search_function(f, 100, target);
        printf("ask for target: %d, search back target ans = %d, ans * ans = %d\n", target, ans, ans*ans);
    }
    return 0;
}
