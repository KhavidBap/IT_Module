#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((arr[i] == 5) && ((arr[i + 1] == 5) || (arr[i + 1] == 6))) {
            count++;
        }
    }
    printf("%d", count); 
}