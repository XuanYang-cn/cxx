#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Vector {
    int *data;
    int size;
    int length;
} Vector;

Vector *init(int n) {
    Vector *v = (Vector *)malloc(sizeof(Vector));
    v->data = (int *)malloc(sizeof(int) * n);
    v->size = n;
    v->length = 0;
    return v;
}

int expand(Vector *v) {
    int extra_size = v->size;
    int *p;
    while (extra_size) {
        p = (int *)realloc(v->data, sizeof(int) * (v->size + extra_size));
        if (p) break;
        extra_size >>= 1;
    }
    if (extra_size == 0) return 0;
    v->data = p;
    v->size += extra_size;
    return 1;
}

int insert(Vector *v, int val, int ind) {
    if (v == NULL) return 0;
    if (ind < 0 || ind > v->length) return 0;
    if (v->length == v->size) {
        if (!expand(v)) return 0;
        printf("success to expand!\n");
    }

    for (int i = v->length; i > ind; i--) {
        v->data[i] = v->data[i - 1];
    }
    v->data[ind] = val;
    v->length += 1;
    return 1;
}

int erase(Vector *v, int ind) {
    if (v == NULL) return 0;
    if (ind < 0 || ind > v->length) return 0;
    for (int i = ind + 1; i < v->length; i++) {
        v->data[i - 1] = v->data[i];
    }
    v -> length -= 1;
    return 1;
}
void clear(Vector *v) {
    if (v == NULL) { return; }
    free(v->data);
    free(v);
    return;
}

void output(Vector *v) {
    if (v == NULL) { return; }
    printf("Vector: [");
    for (int i = 0; i < v->length; i++) {
        i && printf(", ");
        printf("%d", v->data[i]);
    }
    printf("]\n");
    return;
}

int main() {
    srand(time(0));
    const int MAX_OP=20;
    Vector *v = init(2);
    for (int i = 1; i < MAX_OP; i++) {
        int val = rand() % 100;
        int ind = rand() % (v ->length + 3) - 1;
        int op = rand() % 4;
        switch(op) {
            case 0: {
                printf("delete %d at %d from Vector = %d\n", val, ind, insert(v, val, ind));
            } break;
            default: {
                printf("insert %d at %d to Vector = %d\n", val, ind, insert(v, val, ind));
            } break;
        }
        output(v);
        printf("\n");
    }
    clear(v);
    return 0;
}
