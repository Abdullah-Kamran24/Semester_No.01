#include <stdio.h>

int main(){

int year;
printf("Enter the Year: ");
scanf("%d",&year);

if(year % 4 == 0 ||year % 400 == 0){
    printf("\n\t\tLEAP YEAR\n");
    }

else{
        if( year % 100 != 0){
    printf("\n\t\tNOT LEAP YEAR\n");
    }
}

return 0;
}
