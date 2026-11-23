#include <stdio.h>

int main(void)
{
    int x = 42;
    void *ptr = &x;
    int *iptr = (int *)ptr;
    printf("%d\n", *iptr); // 42
    printf("%d\n", *(int*)ptr);
    printf("%d\n", x);
}