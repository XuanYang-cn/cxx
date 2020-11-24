#include <stdio.h>
#include <stdarg.h>

#define PUTC(a) putchar(a), ++cnt

int my_printf(const char *frm, ...) {
    int cnt = 0;
    va_list arg;
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case '%': PUTC(frm[i]); break;
                    case 'd': {
                                  int temp = va_arg(arg, int);
                                  while (temp) {
                                      PUTC(temp%10 + 48);
                                      temp /= 10;
                                  }
                              }

                } break;
            } break;
            default: PUTC(frm[i]); break;
        }
        PUTC(frm[i]);
    }
    return cnt;
}

int main() {
    // output to std out 1 char
    int a =123;
    printf("hello world\n");
    my_printf("Hello world!\n");
    printf("int (a) = %d\n", a);
    my_printf("int (a) = %d\n", a);
    return 0;
}
