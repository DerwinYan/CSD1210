#include <stdio.h>
#include <string.h>

int main(void)
{
    short array[] = {3, 6, 2, 4, 7, 8};
    short *p1 = array + 1;
    short *p5 = array + 5;

    printf("%p\n", (void *)(p5 - p1));

    return 0;
}