#include <stdio.h>

int main() {
    int number;
    printf("enter a number");
    scanf("%d" , &number);

    if(number >0)
        printf("%d is positive.\n", number);
    else
        printf("%d is negative.\n" , number);
        return 0;
}