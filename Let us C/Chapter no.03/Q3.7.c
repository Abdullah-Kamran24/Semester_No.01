#include <stdio.h>

int main(){
int integer,num;

printf("Enter your integer: ");
scanf("%d",&integer);

if(integer < 0){
num = -integer;
}
else{
num = integer;
}
printf("The absolute value of %d : %d",integer,num);

return 0;
}
