#include<stdio.h>
int sumofDigit(int n){
    if (n == 0)
    return 0;
    else 
    return (n % 10) +sumofDigit(n / 10);
    
}
int main() {
    int num , result;
    printf("enter the num :");
    scanf("%d", &num);
    result = sumofDigit(num);
    printf("Sum of digits =%d" , result);
    return 0;
    
}