#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen(__FILE__,"r");
    while(ch!=EOF)
    {
        ch=getc(fp);
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
