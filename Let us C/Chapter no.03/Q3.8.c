#include <stdio.h>

/*
area of rectangle:  lenght * breadth

perimeter of rectangle: 2 * (length + breadth)
*/

int main(){

int area,peri;
float L,B;

printf("Enter the Length of the rectangle: ");
scanf("%f",&L);

printf("Enter the Breadth of the rectangle: ");
scanf("%f",&B);


area = L * B;
peri = 2 * ( L + B);

if(area > peri){
printf("\n~Area of the rectangle is greater than perimeter of the rectangle~\n");
}
else{
printf("Area of the rectangle is less than Perimeter of the rectangle \n");
}
return 0;
}
