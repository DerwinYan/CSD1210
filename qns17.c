#include <stdio.h>

int main(void)
{
    char *d = "Digipenenenen";
    printf("%d\n", (int)sizeof(d)); //Returns length of 'a' with null terminator
    return 0;
}