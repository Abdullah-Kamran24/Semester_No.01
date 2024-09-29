#include <stdio.h>

int main(){
float num1,num2,i;
float total = 1;
i = 1;
printf("Enter the value 1 (base): ");
scanf("%f", &num1);

printf("Enter the value 2 (power): ");
scanf("%f", &num2);

while(i <= num2 ){
total = total * num1;
i++;
}
printf("The BASE(%.2f) and POWER(%.2f) makes : %.2f\n",num1,num2, total);
return 0;
}
