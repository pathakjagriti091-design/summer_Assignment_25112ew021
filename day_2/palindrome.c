#include<stdio.h>
int main() {
    int n , original , reverse =0, rem;
    printf("enter a num");
    scanf("%d" , &n);
    original = n;
    while (n > 0)
    {
        rem = n/10;
        reverse = reverse *10 +rem;
        n =n/10;

    
    }
    if (original == reverse ){
      printf(" palindrome no. ");
    }
    else{
      printf("not a palindrome no. ");
    }
    return 0;
    
}