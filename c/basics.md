# C & Data Structure

## 1. Basics

### 1.1 scanf & printf return value

The return value of `scanf`: number of chars read from std input.

The return value of `printf`: number of chars write to std output.

### 1.2 sprintf, fprintf

`sprintf` wirte to string, `fprintf` write to file.

### 1.3 Math in C

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
``
