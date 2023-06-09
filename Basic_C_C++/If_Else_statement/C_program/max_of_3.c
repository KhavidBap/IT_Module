#include <stdio.h>

int main() {
    int a, b, c;
    printf("1st number = ");
    scanf("%d", &a);
    printf("2nd number = ");
    scanf("%d", &b);
    printf("3rd number = ");
    scanf("%d", &c);
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("max = %d", max);
}