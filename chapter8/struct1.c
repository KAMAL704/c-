#include <stdio.h>

struct person {
    char name[34];
    int regno;
    float fee;
};

void main() {
    struct person p;
    printf("Enter name, regno, fee: ");
    scanf("%s %d %f", &p.name, &p.regno, &p.fee);
    printf("Name: %s\nRegno: %d\nFee: %f\n", p.name, p.regno, p.fee);
    
}
