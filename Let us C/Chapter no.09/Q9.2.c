#include <stdio.h>
void stat(int x,int y,int num,float *power, float *fac);

int main(){
    int num1,num2;
    int num;
    float power , fac;
    stat(num1,num2,num,&power,&fac);
    printf("power: %.2f \nfac: %.2f ",power,fac);
    return 0;

}

void stat(int x,int y,int num,float *power, float *fac){

    int res = 1;
    for(int i=1; i <= y; i++){
        res = res * x;
        *power = res;
    }

    int lac = 1;
    for(int i=0; i <= num; i++){
        lac = lac * i;
        *fac = lac;
    }
}
