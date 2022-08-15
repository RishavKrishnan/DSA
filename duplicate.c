#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];
    int k=0;
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(ar[i]==ar[j])
            {
                printf("Repeated element: %d ",ar[i]);
            }
        }
    }
}
