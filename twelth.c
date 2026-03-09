#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("Address of x = %p\n", (void*)&x);
    printf("Value of p = %p\n", (void*)p);
    printf("Value pointed to by p = %d\n", *p);

    return 0; 

}