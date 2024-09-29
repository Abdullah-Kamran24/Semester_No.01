#include <stdio.h>

int main(){

int num,one,two,three,four,five,rev;

printf("Enter the 5 Digit number: ");
scanf("%d",&num);

one = num % 10;
two = (num / 10) % 10;
three = (num / 100) % 10;
four = (num / 1000) % 10;
five = (num / 10000) % 10;

rev = (five * 10000) + (four * 1000) + (three * 100) + (two * 10) + one;
printf("%d\n",rev);

if (num == rev){
    printf("equal");
}
else{
    printf("not");
}
return 0;
}
