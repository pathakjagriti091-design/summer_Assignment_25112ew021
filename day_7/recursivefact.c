#include<stdio.h>
int factorial(int n){
    if( n==0 || n == 1)
    return 1;
    else
    return n * factorial(n-1);
}
int main() {
    int num ,result;
    printf("enter the num");
    scanf("%d", &num);
    result = factorial(num);
    printf("factorial of %d= %d" ,num , result);
return 0;
     
}