#include<stdio.h>
void display (char ch[]);
void main (){
    char c [50];
    printf("Enter string");
    gets(c);
    display(c);

}

void display(char ch[])
{
    puts("string output");
    puts(ch);
}