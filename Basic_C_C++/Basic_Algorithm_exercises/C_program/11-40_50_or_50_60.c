#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (((a >= 40) && (b >= 40) && (a <= 50) && (b <= 50)) || ((a >= 50) && (b >= 50) && (a <= 60) && (b <= 60))) {
        printf("1");
    } else {
        printf("0");
    }
}