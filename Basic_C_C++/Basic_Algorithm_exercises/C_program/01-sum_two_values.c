#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a == b) {
        printf("%d", (a + b) * 3);
    } else {
        printf("%d", a + b);
    }
}