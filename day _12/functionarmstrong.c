#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, remainder, result = 0, n = 0;

    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    
    if (result == original)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}