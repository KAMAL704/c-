#include<stdio.h>
int add1(int a , int b);
void main(){
    int a,b,c;
    a=1; 
    b= 10;
     c=  add1(a,b);
     printf("%d+%d = %d" ,a,b,c);
   

}
 int add1(int a, int b){
    
    int c;
    c = a + b;
    return c;
    
}


