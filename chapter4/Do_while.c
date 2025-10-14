#include<stdio.h>
int main(){
    int num;
    int sum = 0;

do{

    printf("enter the number ");
    scanf("%d", &num);
    if(num>0)
    sum += num;
    printf("Current sum = %d\n", sum);


}
while(num>0);
    printf(" total sum of number= %d\n" ,sum);
    return 0;
} 
