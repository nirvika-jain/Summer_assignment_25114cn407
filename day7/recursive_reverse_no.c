#include<stdio.h>

int rev=0;

int reverse(int n)
{
    if(n==0)
    {
        return 0;
    }

    rev=rev*10+n%10;
    reverse(n/10);
}

int main()
{
    int n;

    printf("Enter a number=");
    scanf("%d",&n);

    reverse(n);

    printf("Reverse number=%d",rev);

    return 0;
}