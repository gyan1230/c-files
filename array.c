#include <stdio.h>

int main(int argc, const char * argv[]) {


//    double salary[9];

//    double salary [4] = {100,200,500,600};

//    double salary[] = {100,200,500,600,800,900};

//    salary[0] = 20.0;

    int rollNo[20];
    int i,j;
    for (i = 0; i<20; i++) {
        rollNo[i] = i+10;
    }

    for (j = 0; j < 20; j++) {
        printf("Element value at [%d]: %d\n", j, rollNo[j]);
    }

    return 0;
}
