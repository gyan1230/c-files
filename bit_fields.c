#include<stdio.h>

struct test
{
    short int a: 2;
    short int b: 9;
    short int c: 5;
};

struct test2
{
    short int a: 3;
    short int b: 9;
    short int c: 5;
};

struct test3
{
    int a;
    int b;
    int c;
};
int main()
{
    printf("Size of structure test is  %d\n",sizeof(struct test));
    printf("Size of structure test2 is %d\n",sizeof(struct test2));
    printf("Size of structure test3 is %d\n",sizeof(struct test3));
}
