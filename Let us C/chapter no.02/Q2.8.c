#include <stdio.h>
#include <math.h>

int main(){
float degree,radian;
float pi = 3.14;

printf("Enter the value of angle: ");
scanf("%f",&degree);

radian = (pi / 180) * degree;

printf("sin(%.2f) : %.2f\n", degree,sin(radian));
printf("cos(%.2f) : %.2f\n", degree,cos(radian));
printf("tan(%.2f) : %.2f\n", degree,tan(radian));
printf("sec(%.2f) : %.2f\n", degree, 1/sin(radian));
printf("Cosec(%.2f) : %.2f\n", degree, 1/cos(radian));
printf("cot(%.2f) : %.2f\n", degree, 1/tan(radian));

return 0;

}
