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
    int x, pos;
    printf("Insert element = ");
    scanf("%d", &x);
    printf("Position = ");
    scanf("%d", &pos);
    n++;
    for (int i = n - 1; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    printf("After inserting: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}