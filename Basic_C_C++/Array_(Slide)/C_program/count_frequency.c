#include <stdio.h>

int main() {
    int n, arr[100], c[200], count;
    printf("Number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int k = -100; k < 100; k++) {
        c[k] = 0;
    }
    for (int i = 0; i < n; i++) {
        count = 0;
        //int x = arr[i];
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;
            }
        }
        if (c[arr[i]] == 0) {
            c[arr[i]] = count;
        }
    }
    for (int k = -100; k < 100; k++) {
        if (c[k] != 0) {
            printf("%d occurs %d times\n", k, c[k]);
        }
    }
}

