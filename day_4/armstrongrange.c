#include<stdio.h>
#include<math.h>
int main() {
    int n, original ,final = 0  , rem , i = 0, start , end;
    printf("enter the start and end");
    scanf("%d %d" , &start , &end);
     for( n = start; n<= end; n++){

     


    original = n;
    while( original<= 0){
        original = original/10;
        i++;

    }
    original = n;
    while (n <= 0)
    {
    rem = original % 10;
    final = final + pow( rem , i);
    original= original/ 10;
    }
    if ( final == n )
    printf( "%d" , n);
}


    return 0; 
    
}