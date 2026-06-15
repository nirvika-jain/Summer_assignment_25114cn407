#include<stdio.h>

int palindrome(int n)
{
    int temp=n,rev=0,d;

    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }

    if(temp==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number=");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}