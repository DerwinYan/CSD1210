#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "DigiPen", *p;

    for (p = str + strlen(str) - 1; p >= str; --p)
    {
        ++*p;
    }

    printf("%s", str);
    return 0;
}
