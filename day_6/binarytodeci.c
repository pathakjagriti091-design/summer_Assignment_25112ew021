#include<stdio.h>
int main(){
    int n , rem, base=1 , decimal =0;
    printf("enter the binary num:");
    scanf("%d", &n);
    while(n > 0){
        rem = n%10;
        decimal = decimal + rem* base;
        n = n * 2;
        base = base * 2;
    }
    printf("decimal num is : %d", decimal);
    return 0;
}