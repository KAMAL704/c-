#include<stdio.h>
int main(){
    int num;
    int sum = 0;

do{
    printf("enter the number: ");
    scanf("%d", &num);
if(num>0);
sum += num;
}
while(num>0); 
    printf("sum of number= %d\n" ,sum);
    return 0;
} 
