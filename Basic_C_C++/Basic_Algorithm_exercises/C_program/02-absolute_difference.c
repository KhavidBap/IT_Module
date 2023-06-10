#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a > 51) {
        printf("%d", (a - 51) * 3);
    } else {
        printf("%d", (51 - a));
    }
}