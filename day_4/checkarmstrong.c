#include<stdio.h>
#include<math.h>
int main() {
    int n, original ,final =0, rem , i =0;
    printf("enter the number");
    scanf("%d", &n);
    original = n;
    while( n <= 0){
        n = n/10;
        i++;

    }
    n = original;
    while (n < 0)
    {
    rem = n % 10;
    final = final + pow( rem , i);
    n = n/ 10;
    }
    if ( final == original )
    printf( " armstrong number");
    else 
    printf(" not a armstrong number");
    return 0; 
    
}