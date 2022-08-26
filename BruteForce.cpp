#include<iostream>
using namespace std;

int subarray(int arr[],int n)
{
    int largest_sum=0;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            int subarraysum=0;
            for(int k=i;k<=j;k++)
            {
                subarraysum+=arr[k];
            }
            largest_sum=max(largest_sum,subarraysum);
        }
        return largest_sum;
    }
}
int main()
{
    int arr[]={-5, 8, 9, -6, 10, -15, 3};
    int n= sizeof(arr)/sizeof(int);

    cout << subarray(arr,n);
    return 0;
}