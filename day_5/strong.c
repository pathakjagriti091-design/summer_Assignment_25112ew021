#include<stdio.h>
int main () {
    int n , i , original , rem ,sum =0, fact ;
    printf("enter the num:");
    scanf("%d", &n);
    original == n;
    while(n> 0){
    rem = n % 10;
     fact = 1;
    for(i=1; i<=rem; i++){
        fact = fact*i;
        }
        sum = sum + fact;
           n = n/10; 
         
        
        }
        
        if(sum == original){
            printf("the num is  strong num");
        }
        else{
            printf("the num is not a strong num");
        }
        return 0;
    }


