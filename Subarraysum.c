#include<stdio.h>
int main()
{
    int sum=0;
    int ar[]={-5, 8, 9, -6, 10, -15, 3};
    int maxsum=ar[0];
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7-i;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+ar[k];
            }
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }
    } 
    printf("Max sum is: %d",maxsum);
}