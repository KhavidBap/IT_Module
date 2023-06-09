#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Position to delete = ");
    scanf("%d", &pos);
    for (int k = pos - 1; k < n - 1; k++) {
        arr[k] = arr[k+1];
    }
    printf("After deleting: \n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
}