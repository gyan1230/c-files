#include<stdio.h>

int add(int, int);

int main()
{
    printf("Addition of 10 and 15 is %d \n",add(10,15));
    printf("Addition of  7 and 12 is %d \n",add(7,12));
    printf("Addition of 100 and 5 is %d \n",add(100,5));
}

int add(int a, int b)
{
    int carry;
    while(b!=0)
    {
        carry = a & b;

        a = a ^ b;

        b = carry<<1;
    }
    return a;
}
