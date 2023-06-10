#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        if ((arr[i] == arr[i + 1]) && (arr[i + 1] == arr[i + 2])) {
            count++;
            break;
        }
    }
    printf("%d", count); 
}