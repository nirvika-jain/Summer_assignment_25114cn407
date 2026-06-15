#include<stdio.h>

int main()
{
    int a[100],n,i,item,found=0;

    printf("Enter size=");
    scanf("%d",&n);

    printf("Enter elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search=");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            found=1;
            break;
        }
    }

    if(found==1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}