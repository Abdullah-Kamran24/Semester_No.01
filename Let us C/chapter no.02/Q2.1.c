#include <stdio.h>
#include <math.h>

int main(){

float side1,side2,side3,S;
float area_triangle;

printf("Enter an  value of Side 1: ");
scanf("%f",&side1);

printf("Enter an  value of Side 2: ");
scanf("%f",&side2);

printf("Enter an  value of Side 3: ");
scanf("%f",&side3);

S = (side1 + side2 + side3 ) / 2;

area_triangle = sqrt(S * (S - side1) * (S - side2) * (S - side3));
printf("The value of S : %.2f \n", S);
printf("The value of Area of a square : %.2f \n",area_triangle);

return 0;
}
