#include<stdio.h>

unsigned char swap(unsigned char);
int main()
{
    unsigned char a;
    a=0xab;
    printf("After Swap %x\n\n",swap(a));
}

unsigned char swap(unsigned char x)
{
    return((x & 0x0f)<<4 | (x & 0xf0)>>4);
}

