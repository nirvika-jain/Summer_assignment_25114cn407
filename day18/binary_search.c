#include<stdio.h>

int main()
{
    int a[100],n,i,item;
    int low,high,mid,found=0;

    printf("Enter size=");
    scanf("%d",&n);

    printf("Enter sorted elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search=");
    scanf("%d",&item);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==item)
        {
            found=1;
            break;
        }
        else if(item>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(found==1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}