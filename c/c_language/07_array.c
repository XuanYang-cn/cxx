#include <stdio.h>
#define max_n 100

void func(int * num) {

}

int main () {
    int arr[max_n + 5];
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("&arr = %p, &arr[0] = %p\n",arr, &arr[0]);
    func(arr);


    /* for (int i = 0; i < max_n; ++i) { */
    /*     scanf("%d", arr + i); */
    /* } */
    return 0;
}
