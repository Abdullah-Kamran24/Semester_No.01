#include <stdio.h>

int main(){
int A,B,C,D,E;
int num;

printf("Enter the five digit value : ");
scanf("%d",&num);

A = num % 10;
B = ( num / 10) % 10;
C = (num / 100) % 10;
D = (num / 1000) % 10;
E = (num / 10000) % 10;

printf("\n\t\tThe Value is in given Respective Reverse order\n ");
printf("\t\t%d\n",A);
printf("\t\t%d\n",B);
printf("\t\t%d\n",C);
printf("\t\t%d\n",D);
printf("\t\t%d\n",E);

return 0;
}
