#include <stdio.h>

int main(void) {
    char str[] = "CapeOfGoodHope";
    char *p = str + 5;

    while (p >= str)
    {
        ++*p;
        --p;
    }

    printf("%s", str);
    return 0;
}

