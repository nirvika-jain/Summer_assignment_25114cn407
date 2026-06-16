#include<stdio.h>

int main()
{
    int a[100],n,i,sum=0,total=0,missing;

    printf("Enter value of n=");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n-1);

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    for(i=1;i<=n;i++)
    {
        total=total+i;
    }

    missing=total-sum;

    printf("Missing number=%d",missing);

    return 0;
}