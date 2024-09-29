#include <stdio.h>

int main(){
int one, two, five,ten,fifty,hundred;
int total, amount;

printf("Enter an amount : ");
scanf("%d", &amount);

hundred = amount / 100;
amount = amount % 100;

fifty = amount / 50;
amount = amount % 50;

ten = amount / 10;
amount = amount % 10;

five = amount / 5;
amount = amount % 5;

two = amount / 2;
amount = amount % 2;

one = amount / 1;
amount = amount % 1;


total = one + two + five + ten + fifty + hundred;

printf("The smallest Number of note : %d \n", total);

return 0;
}
