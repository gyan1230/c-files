#include<stdio.h>
#include<stdarg.h>

int varfun(int,...);

int main()
{
    int s;
    s=varfun(10,20,30,0);
    printf("Sum is %d",s);
    return 0;
}

int varfun(int a1,...)
{
    int s=0,i;
    va_list args;
    va_start(args,a1);
    for(i=a1;i>0;i=va_arg(args,int))
    {
        s+=i;
    }
    va_end(args);
    return s;
}