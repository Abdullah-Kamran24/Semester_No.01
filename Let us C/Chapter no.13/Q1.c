//13.2
// reverse the array 
#include <stdio.h>

void print_array(int *arr, int *n){
    for(int i = 0; i < *n; i++){
        printf("%d ", arr[i]);
    }
}
void reverse(int *arr1, int *arr2, int *n){
int i;
for(i = 0; i < *n; i++){
        arr2[*n - i- 1] = arr1[i];
    
}
}

int main(){
    int n = 5;
    int arr[5]= {30, 20, 10, 50, 40};
    int arr2[5];

    printf("Orignal array: ");
    print_array(arr, &n);

    reverse(arr,arr2,&n);
    printf("\nReverse array: ");
        print_array(arr2,&n);

    return 0;
}
