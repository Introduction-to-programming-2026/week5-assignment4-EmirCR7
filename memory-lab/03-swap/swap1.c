#include <stdio.h>

// Function signature: parameters are pointers to int
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    // Pass the addresses of x and y
    swap(&x, &y);

    printf("x is %i, y is %i\n", x, y);
}

// Function body using pointers
void swap(int *a, int *b)
{
    int tmp = *a;  // dereference to get value
    *a = *b;       // assign value pointed by b to a
    *b = tmp;      // assign original value of a to b
}