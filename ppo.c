#include<stdio.h>
int ar[9],a=-1;
int push(int v)
{
    a++;
    ar[a]=v;
}
int pop()
{
    printf("Popped item: %d",ar[a]);
    a--;
}
int main()
{
    int o;
    call:
    printf("Enter your preference\n1) Push\n2) Pop\n3) Display\n");
    scanf("%d",&o);
    if(o==1)
    {
        int v;
        printf("Enter the element to push:");
        scanf("%d",&v);
        push(v);
        goto call;
    }
    else if(o==2)
    {
        pop();
        goto call;
    }
    else if(o==3)
    {
        for(int i=0;i<=a;i++)
        {
            printf("%d ",ar[i]);
        }
    }
}