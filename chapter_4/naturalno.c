#include <stdio.h>

int main() {
    int num, sum = 0;
    int i = 1;   

    do {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;   
        i ++;         

    } 
    while (i <= 10);   

    printf("Sum of 10 numbers = %d\n", sum);

    return 0;
}
