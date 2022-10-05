#include<stdio.h>
int ar[20],a=-1;
int push(int v)
{
    a++;
    ar[a]=v;
}
int pop()
{
    a--;
}
int main()
{
    int c=0,sg;
    int o;
    call:
    printf("Enter your preference:\n1) Push\n2) Pop\n3) Find Greatest\n4) Second Greatest\n5) Display\n6) Noice\n");
    scanf("%d",&o);
    if(o==1)
    {
        int v;
        printf("Value:");
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
            if(ar[i]>c)
            {
                c=ar[i];
            }
        }
        printf("Greatest element is: %d\n",c);
        goto call;
    }
    else if(o==4)
    {
        for(int i=0;i<=a;i++)
        {
            if(ar[i]>sg&&ar[i]!=c)
            {
                sg=ar[i];
            }
        }
        printf("Second Geatest element is: %d\n",sg);
        goto call;
    }
    else if(o==5)
    {
        printf("The Entered Stack is:\n");
        for(int i=0;i<=a;i++)
        {
            printf("%d ",ar[i]);
        }
        printf("\n");
        goto call;
    }
    else if(o==6)
    {
        printf("Noice:)");
    }
}