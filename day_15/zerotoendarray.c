#include <stdio.h>

int main() {
    int arr[100], num;

    printf("Enter size: ");
    scanf("%d", &num);

    printf("Enter elements: ");
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;

    for(int i = 0; i < num; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    
    for(int i = j; i < num; i++) {
        arr[i] = 0;
    }

    printf("Array after moving zeros: ");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}