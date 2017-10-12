#include<stdio.h>

int increment(int);
int main()
{
    printf("1 After increment %d\n\n",increment(1));
    printf("2 After increment %d\n\n",increment(2));
    printf("3 After increment %d\n\n",increment(3));
    printf("4 After increment %d\n\n",increment(4));
    printf("5 After increment %d\n\n",increment(5));
}

int increment(int a)
{
    int mask=1;
    while(a & mask)
    {
        a = a&(~mask);
        mask=(mask<<1);
        printf("\nmask is %d\n",mask);

    }
    return (a|mask);
}
