#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[] = {5, 8, 3, 2, 1, 9, 0, 4, 7, 6};
    int *p = a + 2;
    printf("%d\n", *p[1]);      //! Compile time error, * is unary operator since [] will deref p
    return 0;
}