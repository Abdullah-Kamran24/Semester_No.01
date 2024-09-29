#include <stdio.h>

int main(){
    int arr[8] = {5, 4, 7, 8, 7, 2, 9, 3};
    int i,num;

    printf("Enter the nuber want to search: ");
    scanf("%d", &num);

int count =0;

    for(i=0; i <= 9; i++){
        if(arr[i] == num){
            count++;
    }
    }
    printf("Number %d is found %d times in the arays", num ,count);
    
    return 0;
}