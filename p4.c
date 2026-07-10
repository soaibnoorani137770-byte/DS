#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3], b[3], c[3];
    int i;

    printf("enter the value in a:\n");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the value in b:\n");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }

    for (i=0;i<=2;i++)
    {
        c[i]=a[i]+b[i];
    }

    printf("The sum of arrays (values in c) is:\n");
    for(i=0;i<=2;i++)
    {
        printf("%d ",c[i]);
    }

    getch();
}
