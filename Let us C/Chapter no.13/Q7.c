#include <stdio.h>

void insertion(int *arr, int *n){
    int i,j,temp;
    for(i=0; i < 25; i++){
        printf("Enter the element %d : ", i);
        scanf("%d", &arr[i]);
    }

for(i = 0; i < 25; i++){
for(j = i+1; j < 25; j++){
if(arr[i] > arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;

}
}
}

}

int main(){
    int arr[25];
    int n = 25;

    insertion(arr, &n);
    printf("Sorted array is : ");
    for(int i = 0; i < 25; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}