#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "UnCopyRightAbles";
    char *p = str + 8;

    printf("%c,%s", *++p, str);
    return 0;
}