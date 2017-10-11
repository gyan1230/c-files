#include<stdio.h>

#define set(number,bit) (number |= (1<<bit-1))
#define clr(number,bit) (number &= ~(1<<bit-1))
#define tog(number,bit) (number ^ (1<<bit-1))

void display(unsigned int);

int main()
{
    unsigned int i=7;
    int a;
    printf("Binay conversion of %d is:",i);
    display(i);
    a=set(i,4);
    printf("\nSet 4th bit:");
    display(a);

    a=clr(i,2);
    printf("\nClear 2nd bit:");
    display(a);

    a=tog(i,2);
    printf("\nToggle 2nd bit:");
    display(a);

    a=tog(i,1);
    printf("\nToggle 1st bit:");
    display(a);


}

void display(unsigned int a)
{
    unsigned int i;
    for(i=(1<<31);i>0;i=(i>>1))
    {
        if(a&i)
            printf("1");
        else
            printf("0");
    }
}