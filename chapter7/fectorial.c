#include<stdio.h>
int main(){
    int num;
    int i, fact = 1;

    printf("Enter the Number");
    scanf("%d", &num);
    if(num>0){
        for(int i=1; i<=num; i++){
            fact *= i;
        }
        printf("Factorial  of %d is %d\n" ,num,fact);
    }
    else{
        printf("invalid");
    }
    
    return 0;
}