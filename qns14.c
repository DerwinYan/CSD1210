#include <stdio.h>

int main(void) {
    char a[] = "Digipen";
    printf("%d\n", (int)sizeof(a));     //Returns length of 'a' with null terminator
    return 0;
}