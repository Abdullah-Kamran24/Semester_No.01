#include <stdio.h>

int main(){

int x1,x2,y1,y2,x3,y3;
int slope1,slope2;

printf("Enter the Co-ordinates of (X1,Y1): ");
scanf("%d%d",&x1,&y1);

printf("Enter the Co-ordinates of (X2,Y2): ");
scanf("%d%d",&x2,&y2);

printf("Enter the Co-ordinates of (X3,Y3): ");
scanf("%d%d",&x3,&y3);

slope1 = (y2 - y1) / (x2 - x1);
slope2 = (y3 - y2) / (x3 - x2);

if(slope1 == slope2){
printf("Three points (%d,%d) , (%d,%d) and (%d,%d) lies on the straight line \n",x1,y1,x2,y2,x3,y3);
}
else{
printf("Not lies on the straight line\n");
}
return 0;

}
