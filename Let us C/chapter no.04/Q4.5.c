o#include <stdio.h>

int main(){
int hardness,tensile;
float carbon;


printf("Enter the hardness of the Steel (must be greater than 50) : ");
scanf("%d",&hardness);

printf("Enter the carbon content of the steel (must be less than 0.7): ");
scanf("%f",&carbon);

printf("Enter the tensile strength of the steel (must be greater than 5600): ");
scanf("%d",&tensile);

if(hardness >= 50 && carbon <= 0.7 && tensile >= 5600){
printf("Grade is 10, all three conditions are met\n");
}

else if(hardness >= 50 && carbon <= 0.7 ){
printf("Grade is 9, Condition 1 and 2 are met\n");
}

else if(carbon <= 0.7 && tensile >= 5600){
printf("Grade is 8, condition 2 and 3 are met\n");
}

else if(hardness >= 50 && tensile >= 5600){
printf("Grade is 7, condition 1 and 3 are met\n");
}

else if(hardness >= 50 || carbon <= 0.7 || tensile >= 5600){
printf("Grade is 6, one condition is met\n");
}

else{
printf("Grade is 5, none conditions are met\n");
}

return 0;
}
