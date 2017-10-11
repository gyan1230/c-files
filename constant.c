#include<stdio.h>

int main()
{

    float f=8536e-3;
    signed char c;
    c=-127;
    short i;
    for(i=-127;i<127;i++)
    {
        printf("%d c = %c\n",i,c);
        c++;
    }
    printf("F=%f\n\n",f);
    return 1;
}
