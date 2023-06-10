#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (((a >= 100) && (a <= 200)) || ((b >= 100) && (b <= 200))) {
        printf("1");
    } else {
        printf("0");
    }
}