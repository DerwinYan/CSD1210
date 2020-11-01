#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[] = {5, 8, 3, 2, 1, 9, 0, 4, 7, 6};
    int *p = a + sizeof(a) / sizeof(a[0]);
    printf("%d\n", *p);
    printf("%d\n", -p[-3]); 
    return 0;
}