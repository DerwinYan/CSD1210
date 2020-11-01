#include <stdio.h>

int foo(char const *src)
{
    char const *pc = src;       //Pointer = pointer
    while (*src)                //While deref char does not result in segment error
        src++;                  //Go to next address 
    return src - pc;            //Final address - start address     Eg: 0x11 - 0x00     (Char is 1 byte)
}

int main(void)
{
    printf("%d", foo("subdermatoglyphic"));
    return 0;
}