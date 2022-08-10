#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the first array: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=m+n;
    int a[l];
    int t=0;
    for(int i=0;i<10;i++)
    {
        if(i<3)
        {
            a[t]=ar[i];
            t++;
        }
        else
        {
             a[t]=arr[i-3];
             t++;
        }
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}