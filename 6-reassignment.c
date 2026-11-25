#include <stdio.h>

/* void change(int *p)
{
    int temp = 100;
    p = &temp;
}
*/

// above code prints 10 because you neverr modify x. you modify
// where the pointer to p is pointing towards, which stores 100.
// below code directly modifies x to 100.



void change(int *p)
{
    *p = 100;
}


int main(void)
{
    int x = 10;

    change(&x);

    printf("%d\n", x);

    return 0;
}