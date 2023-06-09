#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    printf("Number of even numbers = %d", count);
}