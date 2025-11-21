
#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    int c = a+b;
    
    swap(&a, &b);  
    int d = a-b;

    printf(" a = %d, b = %d , c = %d, d = %d\n", a, b,c,d);

    return 0;
}