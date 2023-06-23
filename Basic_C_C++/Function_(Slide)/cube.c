#include <stdio.h>

double cube(double n) {
    return (n * n * n);
}

int main() {
    double n;
    printf("Enter the number = ");
    scanf("%lf", &n);
    double c = cube(n);
    printf("Cube of %lf is: %lf", n, c);
}