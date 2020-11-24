# C & Data Structure

## 1. Basics

### 1.1 scanf & printf return value

The return value of `scanf`: number of chars read from std input.

The return value of `printf`: number of chars write to std output.

### 1.2 sprintf, fprintf

`sprintf` wirte to string, `fprintf` write to file.

### 1.3 Math in C

[source](03_math.c)
Bacis operation
```c
=
+, -, \*, /, (, ), %
&, |, ^, ~
<<, >>
```

**NOTE:** Include `math.h` need to compile with `-lm`.

```c
#include <math.h>
double
pow (double a, double b){};

double
sqrt (double x){};

double
ceil (double x){
    // return Roundup(x)
    // ceil(4.1) == 5.0
};  

double
floor (double x){
    // return Rounddwon(x)
    // floor(4.1) == 4.0 
};

// Its in `stdlib.h`.
int abs (int x) {};

double
fabs (double x) {};

double
log (double x) {
    // loge(x)
};

double
log10 (double x) {
    // log10(x)
};

double
acos (double x) {
    // arccos(x), x is radian value not angle value.
    // 1 radian = 180/PI
}
```

### 1.4 function pointer

Eulidean algorithm and extended euclidean algorithm
[source](05_gcd.c)

### 1.5 Variable parameter function
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
[source](06_manxint.c)
[printf](06_printf.c)

### 1.6 Array declaration, definition, initialization
### 1.7 Macros
### 1.8 String array

Header *string.h*

|func     |description   |
|:-------:|:------------:|
|strlen() |length        |
|strcmp() |compare       |
|strcpy() |copy          |
|strncmp()|safe compare  |
|strncpy()|safe copy     |
|memcpy() |memory copy   |
|memcmp() |memory compare|
|memset() |memory set    |
