#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the side 1 of the triangle: ");
    scanf("%f", &side1);

    printf("Enter the side 2 of the triangle: ");
    scanf("%f", &side2);

    printf("Enter the side 3 of the triangle: ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral triangle\n");
    } else {
        if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is isosceles triangle\n");
        } else {
                printf("The triangle is Scalene triangle\n");
            }
    }


                if (side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 || side2*side2 + side3*side3 == side1*side1) {
                    printf("The triangle is Right angled triangle \n");
                }

    return 0;
}

