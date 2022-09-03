#include<stdio.h>
int main()
{
   /* int ar[]={12,3,4,5,64,3,45,35};
    for(int i=0;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(ar[i]>ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    for(int a=0;a<=7;a++)
    {
        printf("%d ",ar[a]);
    }*/
    /*
//negative ekements in one side
    int ar[]={12,3,-43,543,5,-647,56,-86,78};
    int k=0;
    int n=0;

    for(int i=0;i<=8;i++)
    {
        if(ar[i]<0)
        {
            int a=ar[i];
            ar[i]=ar[k];
            ar[k]=a;
            k++;
        }
    }
    for(int j=0;j<=8;j++)
    {
        printf("%d ",ar[j]);
    }*/
//shifting by one
   /* int i;
    int arr[]={12,34,53,4,23,4,6,24,3};
    int k=arr[8];
    for(i=7;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=k;
    for(int j=0;j<=8;j++)
    {
        printf("%d ",arr[j]);
    }*/
//Missing integer
    /*int j,i,k;
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
    }*/
//count pairs with given sum.
    /*int arr[]={1,3,4,5,6,7,4,2};
    int sum;
    int k=0;
    printf("Enter the sum.");
    scanf("%d",&sum);
    for(int i=0;i<=7;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                k++;
                printf(": %d, %d\n",arr[i],arr[j]);
            }
        }
    }
    printf("Total %d pairs.",k);
    */
//duplicates
    /*int arr[]={1,2,34,3,2,4,5,34,5,3};
    int k=0;
    for(int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("REPEATING ELEMENT : %d\n",arr[j]);
                k++;
            }
        }
    }
    printf("Totally %d Repeating elements.",k);*/
//subarray with given sum
/*    int arr[]={1,2,3,5,4};
    int k=0;
    int sum=23;
    for(int i=0;i<=4;i++)
    {
        for(int j=i;j<=4;j++)
        {
            k=arr[j]+k;
            if(k>sum)
            {
                break;
            }
            else if(k==sum)
            {
                printf("index %d to %d",j,i);
            }
        }
        k=0;
    }
    */
    /*int arr[2][3]={{1,2,3},{4,8,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",arr[i][j]);
        }   
    }*/
//Accepting elements in a 2d array
    /*int a,b,i,j;
    printf("Enter the size of the 2d array.");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
//Remove the duplicate element
 /*   int a,b;
    int ar[]={12,32,14,32,54,36,54,76,5,87,58,76,8,4,12};
    for(int i=0;i<15;i++)
    {
        for(int j=i+1;j<15;j++)
        {
            if(ar[i]==ar[j])
            {
                printf("Duplicate : %d\n",ar[j]);
            }
        }
    }
    */
//Kadanes Algorithm
 /*   int ar[]={-2,-3,4,-1,-2,1,5,-3};
    int cursum=0;
    int maxsum=0;
    for(int i=0;i<=9;i++)
    {
        cursum=ar[i]+cursum;
        if(maxsum<cursum)
        {
            maxsum=cursum;
            //printf("%d ",cursum);
        }
        if(cursum<0)
        {
            cursum=0;
        }
    }
    printf("%d",maxsum);
}*/
/*
int n=5;
int arr[n][n]; 
for (int line = 0; line < n; line++)
{
    for (int i = 0; i <= line; i++)
    {
    if (line == i || i == 0)
        arr[line][i] = 1;
    else 
        arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
    printf("%d ", arr[line][i]);
    }
    printf("\n");
}*/

//Selection sort

int ar[]={6,5,1,9,2};
int l=0;
for(int i=0;i<=4;i++)
{
    for(int j=i+1;j<=3;j++)
    {
        if(ar[j]<ar[j+1])
        {
            l=ar[j];
        }
    }
    if(l<ar[i])
    {
        int k=ar[i];
        ar[i]=l;
        l=k;
    }
}
for(int i=0;i<=4;i++)
{
    printf("%d ",ar[i]);
}
}