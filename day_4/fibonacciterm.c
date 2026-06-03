#include<stdio.h>
int main() {
    int i , n, b = 1, temp , a = 0;
    printf("enter the term");
    scanf("%d" , &n);
    if (n == 1)
    {
        printf("fibonacci term is : %d" , a);
    }
    else if ( n== 2){
        printf("fibonacci term is: %d" , b);
    }
       else{
        for( i=3; i<=n; i++){
            temp = a+b;
            a =b;
            b = temp;

        }
        printf(" fibonacci term  is : %d" , b);
       }
          return 0;
    }

    