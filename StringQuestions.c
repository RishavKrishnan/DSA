#include<stdio.h>
#include<string.h>
//reversing the words of a string
int main()
{
    char n[50];
    printf("Enter a string\n");
    //scanf("%s",n);
    gets(n);
    //char n[]="What do you mean";
    int k= strlen(n);
    int no;
    //printf("%d",k);
    int l=0;
    int o=k-1;
    int p;
    for(int i=0;i<k;i++)
    {
        for(int j=o;n[j]!=' '&& j>=0;j--)
        {
            l=j;//space k baad ki pehli index
            p=o;//aakhri index har word ka
        }
        o=l-2;
        for(int m=l;m<=p;m++)
        {
            printf("%c",n[m]);
        }
       printf(" ");
        if(o<=0)
        {
            break;
        }
    }

/*  for(int i=0;n[i]!='\0';i++)
    {
        no=i;
        printf("%c",n[i]);
    }
    printf("\n");
    for(int j=no;j>=0;j--)
    {
        printf("%c",n[j]);
    }*/
}