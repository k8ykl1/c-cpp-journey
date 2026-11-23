#include <stdio.h>

double add(double a, int b){
    return a+b;
}

int multiply(int a, int b){
    return a * b;
}

double polynomial(double x){
    return x * x + 3 * x + 2;
}

int main(void)
{
    printf("Addition: %d\n", add(10, 20));
    printf("Multiplication: %d\n", multiply(10, 20));
    printf("Polynomial: %f\n", polynomial(5.0));

    return 0;
}