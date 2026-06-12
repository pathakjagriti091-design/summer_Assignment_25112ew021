#include<stdio.h>

int isPalindrome(int n){
    int original = n;
    int rev = 0, rem;
    while (n !=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10 ;
    }
    if (original = rev)
    return 1;
    else 
    return 0;
}


int main () {
    int n;
    printf("enter a num :");
    scanf("%d" , &n);
    if (isPalindrome(n))
    printf("Palindrome number");
    else 
    printf("Not palindrome");
    return 0;
}
