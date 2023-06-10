#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if ((a % 10 == 0) && (a >= 100) && (a <= 200)) {
        printf("1");
    } else {
        printf("0");
    }
}