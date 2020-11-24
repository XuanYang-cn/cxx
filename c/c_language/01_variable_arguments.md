# C - Variable Arguments Function

**header:** `stdarg.h`

Function that can take variable number of arguments, i.e., parameters.

```c
int func (int n, ...) {

}
```

Use micros from `stdarg.h` to implement the functionality of variable arguments.

- Define a function with it's last parameter as `...` and the one just before the ellipses is always
an `int` which represent th enumber of arguments.

- Create `va_list` type variable int the function definition.
- Use macro `va_start` to initialize the `va_list` variable, with number `num`
- Use macro `va_arg` and `va_list` variable to access each item in argument list.
- Use macro `va_end` to clean up the memory assigned to `va_list` variable.

```c
#include <stdio.h>
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

int main() {
    printf("Average of 2, 3, 4, 5 = %.4f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10 = %.4f\n", average(2, 5, 10));
}
```


