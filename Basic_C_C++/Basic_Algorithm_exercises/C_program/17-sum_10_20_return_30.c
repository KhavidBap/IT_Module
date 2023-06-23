#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (((a + b) >= 10) && ((a + b) <= 20)) {
        printf("30");
    } else {
        printf("%d", (a + b));
    }
}