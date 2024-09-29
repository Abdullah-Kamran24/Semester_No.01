#include <stdio.h>

int main(){
int age,ram,shyam,ajay;

printf("Enter the age of Ram : ");
scanf("%d", &ram);

printf("Enter the age of Shyam : ");
scanf("%d", &shyam);

printf("Enter the age of Ajay : ");
scanf("%d", &ajay);

if(ram < shyam){
    if(ram < ajay){
    printf("\n\t\tRam is youngest\n");
    }
}
if( shyam < ram){
        if(shyam < ajay){
    printf("\t\tShyam is youngest \n");
        }

    }

if( ajay < ram){
        if(ajay < shyam){
    printf("\t\tAjay is youngest\n");
    }
}

else{
    printf("INVALID INPUT \n");
}
return 0;
}
