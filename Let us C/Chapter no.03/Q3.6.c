#include <stdio.h>

int main(){
int side1,side2,side3,total,sum;

printf("Enter the side 1 : ");
scanf("%d",&side1);

printf("Enter the side 2 : ");
scanf("%d",&side2);

printf("Enter the side 3 : ");
scanf("%d",&side3);

sum = side1 + side2 + side3;

if(side1 == side2 && side1 == side3){
    if(sum == 180){
        printf("\n\t\tTRIANGLE OR VALID");
    }
}
else{
    printf("\n\t\tINVALID\n");
}
return 0;
}
