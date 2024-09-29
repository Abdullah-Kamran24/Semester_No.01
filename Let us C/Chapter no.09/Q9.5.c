#include <stdio.h>

void convert(float *kg, float *g, float *t, float *p);

int main(){
    float kg = 5;
    float g,t,p;
    printf("Enter the Amount in KG: ");
    scanf("%f",&kg);
    convert(&kg , &g , &t , &p);

printf("The KG convert into \nGram = %.2f\nTons = %.2f\nPound = %.2f\n",g,t,p);


    return 0;
}

void convert(float *kg,float *g, float *t, float *p){
    *g = *kg * 1000;
    *t = *kg * 0.0011;
    *p = *kg * 2.20462;

}
