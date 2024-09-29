#include <stdio.h>

int main(){

int integer;

printf("Enter the Integer: ");
scanf("%d",&integer);

if(integer %2 == 0){
    printf("\n\t\tEVEN\n");
    }
else{
printf("\n\t\tODD\n");
}
return 0;
}
