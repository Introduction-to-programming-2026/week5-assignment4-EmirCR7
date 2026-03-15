// Fails to swap two integers
//
// Run this. Does x and y actually swap in main?
//
// TODO: Explain below why the swap doesn't work:
// ANSWER: ...
//
// Hint: When you call swap(x, y), does the function receive x and y
//       themselves, or copies of their values?

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

//The swap does not work because the function gets copies of x and y not the x and y.

//When we change a and b we are only changing the copies that are, inside the swap function.

//This means x and y in the part stay the same.

//The swap function is only changing its copies of x and y.

//So x and y in the part do not change.

//The function has its and y, which are copies of the original x and y.

//Changing the copies of x and y inside the swap function does not change the x and y.