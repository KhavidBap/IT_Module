#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a % 10) == (b % 10)) {
        printf("1");
    } else {
        printf("0");
    }
}