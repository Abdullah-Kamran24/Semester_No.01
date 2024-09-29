#include <stdio.h>

int main(){
int side1,side2,side3,sum,large;

printf("Enter the Value of side 1: ");
scanf("%d",&side1);

printf("Enter the Value of side 2: ");
scanf("%d",&side2);

printf("Enter the Value of side 3: ");
scanf("%d",&side3);

if(side1 > side2){
    if(side1 > side3){
    sum = side2 + side3;
    large = side1;
    }
    else{
    sum = side1 + side2;
    large = side3;
    }
}

else {
    if(side2 > side3){
        sum = side1 + side3;
        large = side2;
        }
    else{
        sum = side1 +side2;
        large = side3;
        }
    }

if(sum > large){
    printf("The triangle is valid \n");
}
else{
    printf("The triangle is invalid \n");
}
return 0;
}
