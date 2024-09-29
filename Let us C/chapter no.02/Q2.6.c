#include <stdio.h>
#include <math.h>
int main(){
float L1,L2,G1,G2;
float D,a;

printf("Enter the value of latitude (L1,L2):\n");
scanf("%f%f", &L1,&L2);

printf("Enter the value of longitude (G1,G2):\n ");
scanf("%f%f", &G1,&G2);

a = acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2))* cos(G2 - G1));
D = 3963 * a;

printf("The Distance of the nautical miles : %.2f\n",D);
return 0;
}
