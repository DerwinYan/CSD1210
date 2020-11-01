#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[] = {5, 8, 3, 2, 1, 9, 0, 4, 7, 6};
    int *p = a + 2;
    printf("%p\n", (void *)&a);
    printf("%p\n", (void *)&p[-2]);
    printf("%p\n", (void *)&p[0]);
    printf("%p\n", (void *)&p[3]);
    printf("%p\n", (void *)&p[4]);
    return 0;
}