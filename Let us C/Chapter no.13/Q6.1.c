#include <stdio.h>

void smallest(int *arr, int *small){
    for(int i = 0; i < 5; i++){
        if(arr[i] < *small){
            *small = arr[i];
}
    }
}

int main(){
    int arr[15];
    int small = arr[0];
    for(int i = 0; i < 15; i++){
        printf("Enter the array %d = ", i+1);
        scanf("%d", &arr[i]);
}

smallest(arr, &small);
printf("The smallest number is %d ", small);

return 0;
    
}



