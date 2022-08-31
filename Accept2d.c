//Accepting elements in a 2d array
#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter the size of the 2d array.");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}