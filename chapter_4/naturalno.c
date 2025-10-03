#include <stdio.h>

int main() {
    int num = 1;   
    int sum = 0;

    do {
        sum += num;   
        num ++;        
    } 
    while (num <= 10);   

    printf("Sum of numbers from 1 to 10 = %d\n", sum);

    return 0;
}
