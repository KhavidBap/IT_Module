#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a >= 30) || (b >= 30) || ((a + b) == 30)) {
        printf("1");
    } else {
        printf("0");
    }
}