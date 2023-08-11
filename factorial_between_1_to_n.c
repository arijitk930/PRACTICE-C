#include<stdio.h>
int main()
{
    int n ,i,fact;
    printf("Enter n: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        fact=1;
        for (int j = 1; j <= i; j++)
        {
            fact=fact*j;
        }
        printf("The factorial of %d is %d\n",i,fact);
    }
    return 0;
}
