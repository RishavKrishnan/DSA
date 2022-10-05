#include<stdio.h>
int main()
{
    int ar[10];
    int o,v,a=0,b=0;
    call:
    printf("1)Push\n2)Pop\n3)Find the middle element now\n");
    scanf("%d",&o);
    if(o==1)
    {
        scanf("%d",&v);
        ar[a]=v;
        a++;
        goto call;
    }
    else if(o==2)
    {
        a--;
        goto call;
    }
    //finding the middle part
    else if(o==3)
    {
        b=(a+1)/2;
        printf("Middle element: %d",b);
    }
}
