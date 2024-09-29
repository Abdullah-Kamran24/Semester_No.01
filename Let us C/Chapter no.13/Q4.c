#include <stdio.h>
void pos(int *positive, int *arr ){
    for(int i = 0; i < 25; i++){
        if(arr[i] > 0){
            (*positive)++;
    }
    }
}

void neg(int *negative , int *arr){
    for(int i = 0; i < 25; i++){
        if(arr[i] < 0){
            (*negative)++;
            }
}
}

void ev(int *a, int *arr){
    for(int i = 0; i < 25; i++){
        if(arr[i] % 2 == 0){
            (*a)++;
    }
    }
}

void od( int *b, int *arr ){
       for(int i = 0; i < 25; i++){
        if(arr[i] % 2 != 0){
            (*b)++;
    }
    }
}

int main(){
    int arr[25];
    int positive = 0, negative = 0, even = 0, odd = 0;
    int i;
    for(i = 0; i < 25; i++){
         printf("Enter integer no. %d : ", i+1);
        scanf("%d", arr[i] );

    }
     pos(&positive, arr);
     neg(&negative, arr);
     ev(&even, arr);
     od(&odd, arr);

     printf("Positive numbers: %d\n", positive);
     printf("Negative numbers: %d\n", negative);
     printf("Even numbers: %d\n", even);
     printf("Odd numbers: %d\n", odd);
     
        return 0;
}

