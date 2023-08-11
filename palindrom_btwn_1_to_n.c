#include<stdio.h>
int main()
{
    int n ,i,dig,rev=0,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Palindrome numbers between 1 and %d is:\n",n);
    for( i = 1; i <=n; i++)
    {
        rev=0;
        temp=i;
        while(temp>0){
            dig=temp%10;
            rev=rev*10+dig;
            temp=temp/10;
        }
        if (rev==i)
        {
            printf("%d ",rev);
        }
    }
    return 0;
}
