#include<stdio.h>
int main()
{
    int a,b;
    a=0;
    int ar[]={9,2,8,7,5,4,6,1};
    for(int i=0;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(ar[i]>ar[j])
            {
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
            }
        }
    }
    for(int l=0;l<=7;l++)
    {
        printf("%d",ar[l]);
    }
}