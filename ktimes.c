#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<0;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[i+1])
        {
            printf("%d ",arr[i]);
        }
    }
}