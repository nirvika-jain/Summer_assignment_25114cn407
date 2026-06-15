#include<stdio.h>

int armstrong(int n)
{
    int temp=n,sum=0,d;

    while(n!=0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }

    if(sum==temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number=");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}