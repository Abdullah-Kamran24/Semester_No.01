#include <stdio.h>

int main(){
int fac,i,number;

printf("Enter the Integer: ");
scanf("%d", &number);

fac=i=1;

while(i <= number){
    fac = fac * i;
    i++;
}
printf("The factorial of %d : %d", number,fac);
return 0;
}
