#include<stdio.h>
ar[5],f=-1,r=-1;
int enq(int v)
{
    if(f==-1)
        f++;
    if(r>=4)
    {
        r=-1;
    }
    r++;
    ar[r]=v;
    
}
int deq()
{
    if(f>5)
        f=-1;
    f++;
}
// int disp()
// {
    
// }
int main()
{
    int o;
    call:
    printf("Enter your preference:\n1) Enqueue\n2) Dequeue\n3) Display\n4) Quit\n");
    scanf("%d",&o);
    if(o==1)
    {
        int v;
        printf("Value:");
        scanf("%d",&v);
        enq(v);
        goto call;  
    }
    else if(o==2)
    {
        deq();
        goto call;
    }
    else if(o==3)
    {
        // if(f>=r)
        // {
        //     for(in
        // }
        for(int i=f;i<=r;i++)
        {
            printf("%d\n",ar[i]);
        }
        goto call;
    }
    else if(o==4)
    {
        
    }
}
