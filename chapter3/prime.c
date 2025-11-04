#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1, n%2 == 0, n%3==)
        printf("Not Prime");
    else if (n == 2)
        printf("Prime");
   
    else if (n % 3 == 0 && n != 3)
        printf("Not Prime");
    else if (n % 5 == 0 && n != 5)
        printf("Not Prime");
    else if (n % 7 == 0 && n != 7)
        printf("Not Prime");
    else
        printf("Prime");

    return 0;
}
