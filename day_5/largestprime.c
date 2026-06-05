#include<stdio.h>
int main () {
    int n , i;
    printf("enter the num:");
    scanf("%d", &n);
    for(i=1; i<=n/2; i++){
        while (n % i  == 0)
        {
            n = n/i;
    
        }
    
        }
        printf("%d",  i -1);
        return 0;
    }