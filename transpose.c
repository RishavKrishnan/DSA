#include<stdio.h>
void trans(int* a[10][10],int* a1[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a1[i][j]=a[j][i];
        }
    }
}
void main()
{
    int a[10][10];
    int a1[10][10];
    int m,n;
    printf("Enter the no. of rows and colums:\n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    trans(a,a1,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }
}