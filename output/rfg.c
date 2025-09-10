

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---- Function prototypes ---- */
int add(int a, int b);
long factorial(int n);
int read_int_line(const char* prompt, int* out);
void print_array(const int* arr, size_t n);
void swap_ints(int* a, int* b);

/* A simple struct */
typedef struct {
    char name[32];
    int age;
} Person;

void print_person(const Person* p);

/* ---- Function implementations ---- */

int add(int a, int b) {
    return a + b;
}

long factorial(int n) {
    if (n < 0) {
        return -1; // indicate error for negative inputs
    }
    long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

/* Safer integer input using fgets + sscanf (avoids scanf pitfalls) */
int read_int_line(const char* prompt, int* out) {
    char buf[64];
    printf("%s", prompt);
    if (!fgets(buf, sizeof buf, stdin)) {
        return -1; // input error/EOF
    }
    // Strip trailing newline if present
    buf[strcspn(buf, "\n")] = '\0';
    if (sscanf(buf, "%d", out) != 1) {
        return -2; // parse error
    }
    return 0;
}

void print_array(const int* arr, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i + 1 < n) printf(", ");
    }
    printf("]\n");
}

void swap_ints(int* a, int* b) {
    if (!a || !b) return;
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_person(const Person* p) {
    if (!p) {
        printf("Person(NULL)\n");
        return;
    }
    printf("Person{name=\"%s\", age=%d}\n", p->name, p->age);
}

/* ---- main: try the basics ---- */
int main(void) {
    printf("Hello from C!\n");

    // Variables and arithmetic
    int x = 10;
    int y = 32;
    int z = add(x, y);
    printf("add(%d, %d) = %d\n", x, y, z);

    // Control flow and input
    int n;
    if (read_int_line("Enter a non-negative integer for factorial: ", &n) == 0) {
        long f = factorial(n);
        if (f >= 0)
            printf("factorial(%d) = %ld\n", n, f);
        else
            printf("Cannot compute factorial of a negative number.\n");
    } else {
        printf("Invalid integer input.\n");
    }

    // Arrays and loops
    int nums[5] = {1, 3, 5, 7, 9};
    printf("Array contents: ");
    print_array(nums, 5);
    int sum = 0;
    for (size_t i = 0; i < 5; ++i) {
        sum += nums[i];
    }
    printf("Sum of array = %d\n", sum);

    // Structs
    Person alice = {0};
    strncpy(alice.name, "Alice", sizeof(alice.name) - 1);
    alice.age = 25;
    print_person(&alice);

    // Pointers and swapping
    int a = 4, b = 8;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap_ints(&a, &b);
    printf("After  swap: a=%d, b=%d\n", a, b);

    // Pointer basics: address-of and dereference
    int* px = &x;
    printf("x=%d, &x=%p, px=%p, *px=%d\n", x, (void*)&x, (void*)px, *px);

    return 0;
}