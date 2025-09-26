#include <stdio.h>

int main() {
    int a = 5, b = 10;

    
    if (a > 0 && b > 0)
        printf("AND: Both a and b are positive.\n");

    
    if (a > 0 || b < 0)
        printf("OR: At least one condition is true.\n");

    
    if (!(a == b))
        printf("NOT: a is not equal to b.\n");

    return 0;
}