#include <stdio.h>
#include <math.h>

int main(){

float v,t;
float wcf;

printf("Enter the value of V: ");
scanf("%f",&v);

printf("Enter the value of t: ");
scanf("%f",&t);

wcf = 35.74 + (0.6215 * t) + ((0.4275 * t) - 35.75) * (v * 0.16);

printf("The value of wind-chill faster : %.2f",wcf);

return 0;
}
