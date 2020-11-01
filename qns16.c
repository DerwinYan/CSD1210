#include <stdio.h>

int main(void)
{
    char c[] = {'D', 'i', 'g', '\0', 'i', 'p'};
    printf("%d\n", (int)sizeof(c)); //Returns length of 'a' with null terminator
    return 0;
}