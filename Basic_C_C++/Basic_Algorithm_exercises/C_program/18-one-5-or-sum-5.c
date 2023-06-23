#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a == 5) || (b == 5) || ((a + b) == 5) || ((a - b) == 5) || ((b - a) == 5)) {
        printf("1");
    } else {
        printf("0");
    }
}