#include <stdio.h>

int main(){
    int num,remainder,place,octal,orignal;
    printf("Enter the number: ");
    scanf("%d",&num);
    octal = 0;
    place = 1;
    while(num != 0){
        remainder = num % 8;
        octal = octal + (remainder * place);
        num = num/8;
        place = place * 10;
    }
    printf("The octal : %d",octal);
    return 0;
}
