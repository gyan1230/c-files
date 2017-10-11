#include<stdio.h>

int main()
{
    int *ptr;
    int *fun();
    ptr=fun();
    printf("Hello Gyan\n");
    printf("Value is %d\n",*ptr);
}

int *fun()
{
    static int k=128;
    return &k;
}
