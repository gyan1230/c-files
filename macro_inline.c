#include <stdio.h>

#define gyan(x) x*x*x

inline int GYAN(int x)
{
    return x*x;

}

int main()
{
    int a,b;
    a=3;
    b=2;
    printf("macro is %d\n",gyan(a+b)); //3+2x3+2x3+2
    printf("inline is %d\n",GYAN(a+b)); // 5x5

    printf("macro is %d\n",gyan(++a)); //2 times evaluated 5x5
    printf("inline is %d\n",GYAN(++b)); // 1 time , 3x3

    printf("macro is %f\n",gyan(1.1)); // do not check parameter 1.2x1.2=1.44
    printf("inline is %d\n",GYAN(1.5)); // strict parameter checking
    return 0;
}
