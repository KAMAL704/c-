#include<stdio.h>
int main(){
    int a =10;
    int b = 4;
    int c ;
    printf("enter the case number");
    scanf("%d", &c);
    switch(c){
        case 1:
        printf("%d",a+b);
        break;

        case 2:
        printf("%d",a-b);
        break;

        case 3:
        printf("%d",a*b);
        break;

        case 4:
        printf("%d",a/b);
        break;

    }
    return 0;
}