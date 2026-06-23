#include<stdio.h>

int main()
{
    int a[10][10];
    int r,c1,i,j;

    printf("Enter rows and columns=");
    scanf("%d%d",&r,&c1);

    printf("Enter matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Transpose matrix:\n");

    for(i=0;i<c1;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}