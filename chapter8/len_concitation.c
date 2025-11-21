#include<string.h>
#include<stdio.h>

void main (){
    char str1[12] = "hello";
    char str2[12] = "kamal";
    char str3 [12];
    int len;

     strcpy(str3,str1);
    printf("strcpy(str3,str1),%s\n",str3);
    len=strlen(str1);
    printf("string(str1): %d\n",len);




}
