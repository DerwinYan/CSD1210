#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[] = {'D', 'i', 'g', '\0', 'i', 'p'};
    printf("%d\n", (int)strlen(c)); //Returns length of 'a' with null terminator
    return 0;
}