#include <stdio.h>
int main()
{
    int n, r,i,temp,sum;
    printf("Enter n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        temp=i;
        sum=0;
        while (temp >0)
        {
            r = temp % 10;
            sum += r*r*r;
            temp /= 10;
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;   
}