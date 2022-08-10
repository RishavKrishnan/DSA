#include<stdio.h>
int main()
{
    int t=0;
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
        for(int j=0;j<7;j++)
        {
            if(ar[j]<0)
            {
                int k=ar[t];
                ar[t]=ar[j];
                ar[j]=k;
                t++;               
            }
        }
    printf("Shifting all the elements to one side: \n");
    for(int i=0;i<7;i++)
    {
        printf("%d,",ar[i]);
    }
}