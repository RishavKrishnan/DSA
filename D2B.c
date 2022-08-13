#include<stdio.h>
#include<math.h>
int deci2B(int bin)
{
    int n;
    int sum=0;
    int i=0;
    while(bin>0)
    {
        n=bin%10;
        bin = bin/10;
       if(n==1)
        {
            sum=sum+(pow(i,2));
        }
        i++;
    }
    return sum;
}
void main()
{
    int bin;
    int Deci;
    printf("Enter a Binary no.\n");
    scanf("%d",&bin);
    Deci=deci2B(bin);
    printf("The Decimal no. is: %d",Deci);
}
