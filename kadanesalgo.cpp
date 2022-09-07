#include<iostream>
using namespace std;
int main()
{
    int arr[]={-5, 8, 9, -6, 10, -15, 3};
    int n= sizeof(arr)/sizeof(int);
    int cs=0;
    int lar=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+arr[i];
        if(cs>lar)
        {
            lar=cs;
        }
        if(cs<0)
        {
            cs=0;
        }
    }
    cout<<lar<<endl;
    return 0;
}