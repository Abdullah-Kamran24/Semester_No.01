#include <stdio.h>

int main(){
    float percentage;
    float Agg_marks;
    float english,math,islamiat,programming,physics;

    printf("Enter the marks of \n");

    printf("English : ");
    scanf("%f", &english);

    printf("Math :  ");
    scanf("%f", &math);

    printf("Islamiat : ");
    scanf("%f", &islamiat);

    printf("Programming : ");
    scanf("%f", &programming);

    printf("Physics : ");
    scanf("%f", &physics);

    Agg_marks = english + math + islamiat + programming + physics;
    percentage = (Agg_marks * 100)/500;

    printf("\n\t\t STUDENT PROFILE: \n");
    printf("\tAggregate Marks : (%f/500) \n",Agg_marks);
    printf("\tPercentage: %f \n", percentage);

    return 0;
}
