#include <stdio.h>
#include <math.h>

int main(){
    int n = 14;
    int arr[14] = { -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    double  mean_x = 0.0, sum = 0.0, standard = 0.0, xi= 0.0;

    for(int i = 0; i < n; i++){
        xi = xi + arr[i];
    }
    mean_x = xi / n;

    for(int j = 0; j < n; j++){
        sum += ((arr[j] - mean_x) * (arr[j] - mean_x));
    }

    standard = sqrt(sum / n);

    printf("Mean: %.2lf",mean_x);
    printf("\nStandard deviation: %.2lf", standard);

    return 0;

}