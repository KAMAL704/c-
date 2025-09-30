#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        grade = 'A+';
    else if (marks >= 80 && marks <=90)
        grade = 'A';
    else if (marks >= 70 && marks <=80)
        grade = 'B';
    else if (marks >= 60 && marks <=70)
        grade = 'C';
    else if (marks > 30 && marks <=60)
        grade = 'D';
    else if (marks >= 0 && marks<=30)
        grade = 'F';
        else if (marks >=100)
        grade = 'F';
    

    printf("Your grade is: %c\n", grade);
    return 0;
}