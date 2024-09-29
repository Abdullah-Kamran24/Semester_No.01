#include <stdio.h>
#include <math.h>

int main(){

int x,y;
int r;
float phi;

printf("Enter the value of (x,y) :\n");
scanf("%d%d",&x,&y);

r = sqrt((x*x)+(y*y));
phi = atan(y / x);

printf("The value of r : %d\n",r);
printf("The value of Phi : %f\n", phi);

return 0;
}
