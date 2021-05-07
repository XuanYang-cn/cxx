#include <stdio.h>

int prime[100] = {0};

void init_prime() {
    for (int i = 2; i <  100; i++) {
        if (prime[i]) continue;
        /* prime[0] as counter */
        prime[++prime[0]] = i;
        /* int j may not enough */
        for(int j = i * i; j < 100; j+= i) {
            prime[j] = 1;
        }
    }
    return;
}

int main () {
    init_prime();
    for (int i = 1; i < prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    
    return 0;
}
