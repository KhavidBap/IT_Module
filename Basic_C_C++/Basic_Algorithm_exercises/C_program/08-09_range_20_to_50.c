#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (((a >= 20) && (a <= 50)) || ((b >= 20) && (b <= 50)) || ((c >= 20) && (c <= 50))) {
        printf("1");
    } else {
        printf("0");
    }
}