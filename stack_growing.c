#include<stdio.h>

void stack(int * );
int main()
{
    int local1;
    printf("Address of local 1: %u\n",&local1);
    stack(&local1);
}

void stack(int * local1)
{
    int local2;
    printf("Address of local 2: %u\n",&local2);
    if(local1<&local2)
        printf("Stack is growing downwards...\n");
    else
        printf("Stack is growing upwards...\n");
}
