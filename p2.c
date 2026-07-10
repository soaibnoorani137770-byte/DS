#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int s;

    printf("enter 10 values:\n");

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i <= 9; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("enter the value you want to search: ");
    scanf("%d", &s);

    for(i = 0; i <= 9; i++)
    {
        if(s == a[i])
        {
            break;
        }
    }

    if(i == 10)
    {
        printf("value not found\n");
    }
    else
    {
        printf("value found at location %d\n", i + 1);
    }

    return 0;
}
