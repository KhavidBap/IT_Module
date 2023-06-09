#include <stdio.h>

int main() {
    int n, arr[100], count;
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Unique element(s) = ");
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
}