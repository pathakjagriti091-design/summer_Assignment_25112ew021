#include <stdio.h>

int main() {
    int arr[10], rev[10], n;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }

    printf("Reversed array:");
    for(int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}