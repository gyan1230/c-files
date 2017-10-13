#include <stdio.h>

int main()
{
    char x = 'a';
    char y;
    char z = 'c';

    const char *p; // pointer to a constant
    char * const p2=&x;  // constant pointer need to initialize in declaration time
    const char * const p3 = &z;
//    p3=&z;


    printf("constant pointer assigned to %c\n",*p2);
    printf("Address constant pointer assigned %u\n",&p2);
    p=&x;
    printf("Pointer to constant assigned to %c\n",*p);
//    *p='z'; //error bcoz p is pointer to constant
//     p2=&y;  // error bcoz need to initialize in declaration time
    *p2='b';


    printf("constant pointer assigned to %c\n",*p2);
    printf("Address constant pointer assigned %u\n",&p2);

//    p3=&y;
    printf("constant pointer to constant assigned to %c\n",*p3);
}
