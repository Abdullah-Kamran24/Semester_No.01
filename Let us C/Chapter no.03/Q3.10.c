#include <stdio.h>
#include <math.h>

int main(){

int center1,center2,value1,value2;
int radius,distance;

printf("Enter circle center co-ordinates(X,Y): ");
scanf("%d%d",&center1,&center2);

printf("Enter the radius of the circle: ");
scanf("%d",&radius);

printf("Enter YOur value of co-ordinates(X,Y) of center of the circle: ");
scanf("%d%d",&value1,&value2);

distance = sqrt(((value1*value1)- (center1 * center1)) + ((value2 * value2) - (center2 * center2)));

if(distance < radius){
printf("The coordinates (%d,%d) lies inside the circle\n: ",value1,value2);
}

else if( distance == radius){
printf("The coordinates (%d,%d) lies on the circle\n: ",value1,value2);
}

else{
printf("The coordinates (%d,%d) lies outside the circle\n: ",value1,value2);
}

return 0;
}
