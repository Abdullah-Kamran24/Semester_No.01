#include <stdio.h>

int main(){

int arm,num,orignal,remainder;
num = 1;

printf("ARMSTRONG NUMBERS from(1 to 500):\n");

while(num <= 500){
    orignal = num;
    arm = 0;
    while(orignal != 0){
        remainder = orignal % 10;
        arm = (remainder * remainder * remainder) + arm;
        orignal = orignal / 10;
    }
    if(num == arm){
        printf("%d\n",num);
    }
    num++;
}
return 0;
}
