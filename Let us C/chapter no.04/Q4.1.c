#include <stdio.h>

int main(){
    char ch;

    printf("Enter  your character: ");
    scanf(" %c",&ch);

    if(ch >= 65 && ch <= 90){
        printf("The character are upper case\n");
    }
    else{
        if(ch >= 97 && ch <= 122){
            printf("The character are lower case\n");
        }
        else{
            if(ch >= 48 && ch <= 57){
                printf("The character is digit\n");
        }
        else{
            if((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 123 && ch <= 127)){
                printf("The character is special symbol\n");
            }
          }
        }
    }
    return 0;
}
