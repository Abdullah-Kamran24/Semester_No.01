#include <stdio.h>

int main(){
    int num,count,positive,negative;
    while( 1){
        count = 1;
        printf("Enter the number %d: ",count);
        scanf("%d", &num);

        if(num == 0){
            break;
        }
        else if(num >= 0){
            positive++;
        }
        else{
           negative++;
        }
        num++;
    }
    printf("positive number: %d\n", positive);
     printf("Negative Number: %d\n", negative);
    printf("Zero number : %d\n", num);
    return 0;
}
