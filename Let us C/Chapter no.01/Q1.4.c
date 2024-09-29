#include <stdio.h>

int main(){

float f;
float c;

printf("Enter The Fahrenheit Temperature:");
scanf("%f", &f);
c = ( f - 32 )* 0.5;
printf("\n\tFahrenheit : %f\n", f);
printf("\tCentigrade : %f\n",c);

return 0;
}
