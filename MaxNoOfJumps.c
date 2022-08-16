#include <stdio.h>

int main()
{
    int n, m, count = 1, arr[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    m = n;
    for (int i = 0; i < n; i += arr[i])
    {
        if (arr[i] == 0)
        {
            goto exit;
        }
        else
        {
            m -= arr[i];
            printf(" m :%d \n",m);
            printf("count : %d \n",count);

            if (m <= 0)
            {
                goto print;
            }
            count++;
        }
    }
exit:
    return -1;

print:
    printf("Min jumps: %d", count);
    return 0;
}