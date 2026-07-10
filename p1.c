#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("address of a is %p\n", (void*)p);
    printf("value of a is %d\n", *p);

    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}
