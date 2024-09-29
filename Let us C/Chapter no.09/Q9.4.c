#include <stdio.h>

void circular_shift(int *x, int *y, int *z);

int main(){
    int x = 5;
    int y = 8;
    int z = 10;
    printf("The number before circular shift: x = %d\ty = %d\tz = %d\n",x,y,z);
    circular_shift(&x, &y, &z);
    return 0;
}



void circular_shift(int *x, int *y, int *z){
        int t;

        t = *z;
        *z = *y;
        *y = *x;
        *x = t;

        printf("The number after circular shift: x = %d\ty = %d\tz = %d\n",*x,*y,*z);
}
