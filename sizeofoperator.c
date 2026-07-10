#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;
    short e;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));
    printf("Size of short: %zu bytes\n", sizeof(e));
    return 0;
}