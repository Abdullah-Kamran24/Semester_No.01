#include <stdio.h>
#include <math.h>

int cal_area(double a,double b, double angle){
    float area;
    area = 0.5 *(a * b) * sin(angle);
}

int main(){
    double a[6] = {137.5, 155.2, 149.3, 160.0, 155.6, 149.7};
    double b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    double angle[6] = {0.78, 0.98, 1.35, 9.00, 1.25, 1.75};

    double area[6];
    double largest_area;
    double largest_plot;

    for(int i = 0; i < 6; i++){
        area[i] = cal_area(a[i], b[i], angle[i]);
        if(area[i] > largest_area){
            largest_area = area[i];
            largest_plot = i + 1;
        }
    }
        for(int j = 0; j < 6; j++){
            printf("Area of triangle %d is: %.2lf\n", j + 1, area[j]);
        }

        printf("The largest plot is plot %.2lf with an area of %.2lf\n",largest_plot, largest_area);

        return 0;
    
}