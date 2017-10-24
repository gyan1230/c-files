#include<stdio.h>

union key
{
    short int i;
    char ch[2];
};

struct key2
{
    short int i;
    char ch[2];
};

int main()
{
    union key k1;
    struct key2 k2;
    k1.i=512;
    printf("Key value of i is %d\n",k1.i);
    printf("Key value of ch[0] is %d\n",k1.ch[0]);
    printf("Key value of ch[1] is %d\n",k1.ch[1]);
    printf("Size of union is %d\n",sizeof(union key));
    printf("Size of struct is %d\n",sizeof(struct key2));
    return 0;

}
