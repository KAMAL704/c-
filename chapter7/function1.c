#include<stdio.h>
void add1(int a , int b);
void main(){
    int a,b;
    a=10; 
    b= 10;
    add1(a,b);
   

}
void add1(int a, int b){
    
    int c;
    c = a + b;
    printf("%d+%d = %d" ,a,b,c);
}


