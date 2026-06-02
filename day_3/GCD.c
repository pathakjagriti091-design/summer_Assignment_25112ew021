#include<stdio.h>
int main () {
    int num1 , num2 , i , GCD;
    printf("enter the two num ");
    scanf(" %d %d" , &num1 , &num2);
    for (i = 1; i <= num1 && i<= num2; i++ ){
        if ( num1 % i == 0 && num2 % i==0 )
    {
           GCD =i;
    } 
       }
 
    printf(" GCD = %d" , GCD);
    return 0;

}