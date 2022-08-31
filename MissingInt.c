//Missing integer
#include<stdio.h>
int main()
{
    int j,i,k;
    int arr[]={5,3,4,1,8,9,7};
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=7;j++)
        {
            k=0;
            if(i==arr[j])
            {
                k++;
                break;
            }
        }
        if(k==0)
        {
            printf("%d is the missing element.\n",i);
        }
    }
}