#include <stdio.h>

int main(){

 float employee,pay;
 employee = 1;
  int number = 1;

 while( number <= 10)
 {
 printf("\nEnter the working hour of employee %d: ",number);
 scanf("%f",&employee);

 if(employee >= 40){
 pay = (employee - 40) * 120;

 printf("The overtime working hour pays of employee: %.2f\n", pay);
 }
 else{
    printf("Employee didnt worked overtime\n");
 }

 number++;
 }
 return 0;
}

