#include<stdio.h>
ar[5],a=-1,c=-1;
int enq(int b)
{
    if(a>=4)
    {
        printf("The queue is full");
    }
    else
    {
        if(c==-1)
        {
            c++;
        }
        ++a;
        ar[a]=b;
    }
}
int deq()
{
    c++;   
}
int main()
{
    int o,b;
        call:
        printf("1)Enqueue\n2)Dequeue\n3)Display\n");
        scanf("%d",&o);
        if(o==1)
        {
            scanf("%d",&b);
            enq(b);
            goto call;
        }
        else if(o==2)
        {
            deq();
            goto call;
        }
        else if(o==3)
        {
            printf("a=%d, c= %d\n",a,c);
            for(int i=c;i<=a;i++)
            {
                printf("%d \n",ar[i]);
            }
            goto call;
        }
}