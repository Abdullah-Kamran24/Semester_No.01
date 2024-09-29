#include <stdio.h>

void modify(int *arr, int *n){
    for(int i=0; i < *n; i++){
        arr[i] = arr[i] * 3;
}
}

int main(){
    int n = 10;
    int arr[10];
    for(int i=0; i < n; i++){
        printf("The elements %d: ", i+1);
        scanf("%d", &arr[i]);
        }

        modify(arr, &n);
        for(int i=0; i < n; i++){
            printf("%d ", arr[i]);
            }

            return 0;
}