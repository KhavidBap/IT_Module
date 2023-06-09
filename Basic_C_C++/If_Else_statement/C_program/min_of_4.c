#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("1st number = ");
    scanf("%d", &a);
    printf("2nd number = ");
    scanf("%d", &b);
    printf("3rd number = ");
    scanf("%d", &c);
    printf("4th number = ");
    scanf("%d", &d);
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (c < min) {
        min = c;
    }
    printf("min = %d", min);
}