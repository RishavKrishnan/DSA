#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the size of the array: \n");
    scanf("%d%d",&x,&y);
    int ar[x][y];
    int a=0,b=0,c=0;
    printf("Enter the array elements: \n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d ",&ar[i][j]);
            if(ar[i][j]!=0)
            {
                c++;
            }
        }
    }
    int arr[c][3];
            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    if(ar[i][j]!=0)
                    {
                       //printf("%d %d %d",i,j,ar[i][j]);
                        arr[a][b]=i;
                        arr[a][++b]=j;
                        arr[a][++b]=ar[i][j];
                        a++;
                        b=0;                      
                    }
                }//printf("\n");
            }
            //printf("\n\n");
            for(int i=0;i<c;i++)
            {
                for(int j=0;j<3;j++)
                {
                    printf("%d ",arr[i][j]);
                }printf("\n");
            }
}