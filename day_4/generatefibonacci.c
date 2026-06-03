 #include<stdio.h>
int main() {
    int i , n, b = 1, temp , a = 0;
    printf("enter the number");
    scanf("%d" , &n);
    printf("fibonacci series : ");
    for ( i = 1; i <= n; i++)


    {
        printf("%d" , a);
        temp = a+b;
        a = b;
        b = temp;
        ("%d", a);
    }

    return 0;
}