// #include<stdio.h>
// int main(){
//     int num;
//     int sum = 0;

// do{

//     printf("enter the number: ");
//     scanf("%d", &num);
// if(num>0)
// sum += num;

// }
// while(num>0);
//     printf("sum of number= %d\n" ,sum);
//     return 0;
// } 
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0) {   // only add positive numbers
            sum += num;
        }

    } while (num > 0);   // loop until user enters 0 or a negative number

    printf("Sum of numbers = %d\n", sum);

    return 0;
}
