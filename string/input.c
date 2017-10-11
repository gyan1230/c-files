#include "gstr.h"
#include <stdio.h>
#include <string.h>
int main()
{
    int flag=0;
    char input[20];
    printf("Enter a string:");
    scanf("%[^\n]s",input);
    flag=check(input,flag);

    if(flag==0)
        printf("\n\nDisplay sucessful\n\n");
    else
        printf("\n\nFailed to display\n\n...");

    return 0;
}
