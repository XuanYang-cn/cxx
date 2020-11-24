#include <stdio.h>

#ifdef DEBUG
#define log(fmt, args...) { \
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__); \
    printf(fmt, ##args); \
}

#else
#define log(fmt, args...)
#endif

#define contact(a, b) a##b

int main() {
    int a = 123;
    int b = 345;
    log("%d\n", a);
    log("%d\n", b);
    log("hello world!\n");

    int contactme;
    contact(contact, me) = 112233;
    return 0;
}
