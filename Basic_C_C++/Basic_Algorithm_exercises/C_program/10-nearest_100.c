#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a != b) {
        if (abs(a - 100) < abs(b - 100)) {
            printf("%d", a);
        } else if (abs(a - 100) > abs(b - 100)) {
            printf("%d", b);
        } else {
            printf("0");
        }
    } else {
        printf("0");
    }
}