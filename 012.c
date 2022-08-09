#include<stdio.h>
int main()
{
    int ar[]={1,2,0,1,0,2,1,0,2,0,2,1,0};
    //method one
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            if(ar[i]<ar[j])
            {
                int k=ar[i];
                ar[i]=ar[j];
                ar[j]=k;
            }
        }
    }
    //method two
    for(int i=0;i<13;i++)
    {
        if(ar[i]==0)
        {
            printf("0 ");
        }
        else if(ar[i]==1)
        {
           printf("1 ");
        }
        else 
        {
            printf("2 ");
        }
    }printf("\n");
    for(int i=0;i<13;i++)
    {
        printf("%d ",ar[i]);
    }
}