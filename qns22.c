#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "UnCopyRightAbles";
    char *p = str + 5;

    printf("%c,%s", (*p)++, str);
    return 0;
}