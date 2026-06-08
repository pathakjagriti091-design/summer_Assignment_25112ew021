#include<stdio.h>
int reverse(int n, int rev){
    if (n == 0)
    return rev;
    else 
    return reverse(n / 10 , rev * 10 + (n % 10));
    
}
int main() {
    int num , result;
    printf("enter the num :");
    scanf("%d", &num);

    result = reverse(num , 0);
    printf("Reversed number = %d" , result);
    return 0;
    
}