#include <stdio.h>
#include <omp.h>

int
main(){
    omp_set_num_threads(8);
#pragma omp parallel for
    for(int i = 0; i < 10; i++){
        printf("i = %d, I'm thread %d\n", i, omp_get_thread_num());
    }
}
