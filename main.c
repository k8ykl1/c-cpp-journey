#include <stdio.h>

int main(void)
{
    double a=10;
    double b=3;
    printf("a+b = %f\n", a+b);
    printf("a*b = %f\n", a*b);
    printf("a-b = %f\n", a-b);
    printf("a/b = %f\n", a/b);

    double x=5;
    double f = x*x + 3*x + 2; 

    printf("f(5) = %f\n", f);
    printf("%d\n", 10 + 5 * 2);
    printf("%.1f\n", (float)(10+5)*2);


    return 0;
}