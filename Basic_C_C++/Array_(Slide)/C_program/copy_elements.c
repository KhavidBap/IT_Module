#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    //Copy element
    printf("New array: \n");
    int b[100];
    for (int i = 0; i < n; i++) {
        b[i] = arr[i];
        printf("%d ", b[i]);
    }
}