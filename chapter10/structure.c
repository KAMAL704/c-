#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    char address[50];
    char trade[50];
};

int main() {
    struct Student s;   

    
    printf("\nEnter details of student:\n");

    printf("Enter your Name: ");
    scanf("%s", s.name);

    printf("Reg No: ");
    scanf("%d", &s.regNo);

    printf("Address: ");
    scanf("%s", s.address);

    printf("Trade: ");
    scanf("%s", s.trade);

    
    printf("\n--- Student Details ---\n");

    printf("Name: %s\n", s.name);
    printf("Reg No: %d\n", s.regNo);
    printf("Address: %s\n", s.address);
    printf("Trade: %s\n", s.trade);

    return 0;
}
