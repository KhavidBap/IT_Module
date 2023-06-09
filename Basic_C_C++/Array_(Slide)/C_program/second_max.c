#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int max2 = min;
    for (int i = 0; i < n; i++) {
        if ((arr[i] > max2) && (arr[i] != max)) {
            max2 = arr[i];
        }
    }
    if (max2 == max) {
        printf("There is no second large number");
    } else {
        printf("Second large number = %d", max2);
    }
}