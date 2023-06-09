#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int s = 0;
    for (int i = 0; i < n; i++) {
        s = s + arr[i];
    }
    printf("Sum of array = %d", s);
}