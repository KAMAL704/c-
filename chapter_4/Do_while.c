#include<stdio.h>
int main(){
    int num;
    int sum = 0;

do{
    printf("enter the number, ");
    scanf("%d", &num);
if(num>0);
sum += num;
}
while(sum>0); 
    printf("%d sum of number," &sum);
} 

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;   
        }

    } while (num > 0);  

    printf("Sum of numbers = %d\n", sum);

    return 0;
}
