#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[] = {5, 8, 3, 2, 1, 9, 0, 4, 7, 6};
    int *p = a + 2;
    printf("%d\n", -3[p]);      //Brackets run first, deref 5th element then (-) the value      //? Is it L or R value?
    return 0;
}