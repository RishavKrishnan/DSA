//negative ekements in one side
#include<stdio.h>
int main()
{
    int ar[]={12,3,-43,543,5,-647,56,-86,78};
    int k=0;
    int n=0;

    for(int i=0;i<=8;i++)
    {
        if(ar[i]<0)
        {
            int a=ar[i];
            ar[i]=ar[k];
            ar[k]=a;
            k++;
        }
    }
    for(int j=0;j<=8;j++)
    {
        printf("%d ",ar[j]);
    }
}