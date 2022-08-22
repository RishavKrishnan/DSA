#include<stdio.h>
int main()
{
    int n,m,o;
    printf("Enter the size of the first array: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&m);
    int ar1[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("Enter the size of the third array: ");
    scanf("%d",&o);
    int ar2[o];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar2[i]);
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i]==ar1[j])
            {
                for(int k=0;k<o;k++)
                {
                    if(ar[i]==ar2[k])
                    {
                        printf("%d ",ar[i]);
                    }
                }
            }
        }
    }
}