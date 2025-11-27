#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[50];
    char dept[50];
    float marks;
    struct Date dob;  
};

int main() {
    struct Student s;

   
    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Department: ");
    scanf("%s", s.dept);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("Enter Date of Birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

   
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Department: %s\n", s.dept);
    printf("Marks: %f\n", s.marks);
    printf("Date of Birth: %d-%d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
