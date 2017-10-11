#include "gstr.h"
#include <stdio.h>
#include <string.h>

int display(char * rcv)
{
    strupr(rcv);
    printf("In caps the entered string -> ");
    printf("Hello,\'%s\'",rcv);
    return 0;
}

int check(char * crcv, int cflag)
{
    int i;
    for(i=0;i<=strlen(crcv);i++)
    {
        if((crcv[i]>65 && crcv[i<90]) || (crcv[i]>97 && crcv[i<122]))
         {
             cflag = display(crcv);
             break;
         }
        else
            printf("Enter wrong input");
            cflag =1;
            break;
    }
    return cflag;


}
