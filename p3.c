#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int sum = 0;

    printf("enter 10 values:\n");

    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i <= 9; i++)
    {
        printf("%d\n", a[i]);
    }

    for(i = 0; i <= 9; i++)
    {
        sum = sum + a[i];
    }

    printf("sum of all elements is %d\n", sum);

    return 0;
}
