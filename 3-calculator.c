#include <stdio.h>

double add(double a, double b){
    return a + b;
}

double multiply(double a, double b){
    return a * b;
}

double subtract(double a, double b){
    return a - b;
}

double divide(double a, double b){
    if (b ==0){
        printf("Error: division by 0");
        return 0.0;
    }
    return a / b;
}


int main(void){
    printf("Addition: %f\n", add(10, 20));
    printf("Multiplication: %f\n", multiply(10, 20));
    printf("Subtraction: %f\n", subtract(10, 20));
    printf("Division: %f\n", divide(10, 20));
    return 0;
}