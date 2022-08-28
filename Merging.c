#include<stdio.h>
int main()
{
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int s1=sizeof(ar1)/sizeof(int);
    int s2=sizeof(ar2)/sizeof(int);
    //int k=s1+s2;
    //int ar[k];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(ar2[i]<ar1[j])
            {
                int k=ar2[i];
                ar2[i]=ar1[j];
                ar1[j]=k;
            }
        }
    }
    for(int i=0;i)
    {
    for(int j=0;j<s1;j++)
    {
        printf("%d ",ar1[j]);
    }printf("\n");
    for(int j=0;j<s2;j++)
    {
        printf("%d ",ar2[j]);
    }
    }
}