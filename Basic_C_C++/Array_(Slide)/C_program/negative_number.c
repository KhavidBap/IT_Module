#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Negative number = ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
}