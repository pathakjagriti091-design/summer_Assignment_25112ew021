#include <stdio.h>

void checkPerfect(int num)
{
    int i, sum = 0;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        printf("Perfect number");
    else
        printf("Not a perfect number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPerfect(n);

    return 0;
}