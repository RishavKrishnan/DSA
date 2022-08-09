#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Please enter the array:\n");
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the Kth element:");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                int k=ar[i];
                ar[i]=ar[j];
                ar[j]=k;
            }
        }
    }
    printf("The array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n and the kth smallest element is: %d",ar[k-1]);

}