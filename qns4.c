#include <stdio.h>

int main(void)
{
    int i = 5;
    int *p;

    p = &i;
    
    //printf("%d", &*i);        //Doesnt work
    printf("%d\n", *&i);            //Confirmed
    printf("%d\n", *p);             //Confirmed
    printf("%p\n", (void *)&p);     //Confirmed
    printf("%p\n", (void *)*&p);    //Confirmed
    printf("%p\n", (void *) &*p);   //Confirmed
    printf("%p\n", (void *)&i);     //Confirmed
    //printf("%d\n", *i);         //Doesnt work


    return 0;
}
