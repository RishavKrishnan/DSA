#include<stdio.h>
int maxmin(int* a,int s)
{
    int k=0;
    for(int i=0;i<s;i++)
    {
        if(*a>k)
        {
            k=*a;
        }a++;   
    }
    printf("%d",k);
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int s=sizeof(ar)/sizeof(int);
    //printf("%d",s);
    maxmin(ar,s);
}