#include <stdio.h>

int main(){
    int km;
    float m,feet,inch,cm;

    printf("Enter the distance between the two cities (in kilometer) : ");
    scanf("%d",&km);

    m = 1000 * km;
    feet = 3280.84 * km;
    inch = 39370.1 * km;
    cm = 100000 * km;

    printf("\n\t\tDISTANCE BETWEEN TWO CITIES\n\n");
    printf("\t\tIn meters: %.2f\n",m);
    printf("\t\tIn centimeters: %.2f\n",cm);
    printf("\t\tIn inches: %.2f\n",inch);
    printf("\t\tIn Feet: %.2f\n",feet);

    return 0;
}
