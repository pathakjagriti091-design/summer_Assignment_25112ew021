#include<stdio.h>
int main () {
    int n , i , sum =0;
    printf("enter the num:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if (n % i ==0){
            sum = sum +i;
        }
        
            
        }
        if(sum =- n){
            printf("the num is perfect num");
        }
        else{
            printf("the num is not a perfect num");
        }
        return 0;
    }


