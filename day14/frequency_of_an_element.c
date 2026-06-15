#include<stdio.h>

int main()
{
    int a[100],n,i,item,count=0;

    printf("Enter size=");
    scanf("%d",&n);

    printf("Enter elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element=");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            count++;
        }
    }

    printf("Frequency=%d",count);

    return 0;
}