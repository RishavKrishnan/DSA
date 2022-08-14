#include<stdio.h>
int main()
{
    int k,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the integer:");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d ",i);
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(ar[i]>k)
        {
            ar[i]=ar[i]-k;
        }
        if(ar[i]<=k)
        {
            ar[i]=ar[i]+k;
        }
    }
    printf("Elements after calculation: \n");
    for(int i=0;i<4;i++)
    {
        printf("%d ",ar[i]);
    }
    int l=ar[3]-ar[0];
    printf("\nThe maximum difference between the heights is: %d",l);
}