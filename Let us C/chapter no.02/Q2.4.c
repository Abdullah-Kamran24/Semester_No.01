#include <stdio.h>

int main(){
int a,b,c,d,e;
int num,total;

printf("Enter a Five digit number: ");
scanf("%d",&num);

a = (num % 10);
b = (num / 10) % 10;
c = (num / 100) % 100;
d = (num / 1000) % 1000;
e = (num / 10000) % 10000;

total = a + b + c + d + e ;
printf("Sum of digits : %d \n", total);

return 0;
}
