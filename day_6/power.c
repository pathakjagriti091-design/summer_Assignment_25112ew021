#include<stdio.h>
int main() {
    int a , n, result =1;
    printf("enter the num and a:");
    scanf("%d%d", &n , &a);
    while(n> 0){
        result = result * a;
        n--;
    }
    printf("answer = %d" , result);
    return 0;
}