#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    int *y = &x;
    x = 10;
    printf("%i", x * *y * x + *y);
    return 0;
}