#include<stdio.h>
int main(){
    int n , binary=0 , rem, place=1;
    printf("enter the decimal num:");
    scanf("%d", &n);
    while(n > 0){
        rem = n%2;
        binary = binary + rem* place;
        n = n /2;
        place = place * 10;
    }
    printf("binary num is : %d", binary);
    return 0;
}