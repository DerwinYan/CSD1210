#include <stdio.h>

void foo(int *a, int s)
{
    int *b = a + s;         //b = address of a + s number of int (0x004)

    while (++a != b)        //while address of a != preset end address
    {
        *a += *(a - 1);     //Deref a, value += g[a-1]
    }
}

int main(void)
{
    int g[] = {1, 2, 3, 4, 5, 6}, *b = g;       //g decay into pointer hence b can point to first element of g  ---------> int* = int*
    int *p = g + sizeof(g) / sizeof(g[0]);      //p has last address of array g      pointer p = address of g + length of array

    foo(g, 3);                                  //address of first element of g, int 3
    foo(g + 2, 3);

    while (b != p)              //While address of b != address of p    ----------->    basically printing out entire array since b is start and p is end of array
    {
        printf("%d,", *b++);                    //* Output: 1,3,6,10,15,6
    }

    return 0;
}