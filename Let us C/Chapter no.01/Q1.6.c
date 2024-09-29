#include <stdio.h>

int main() {
    int width_A0 = 1189;
    int height_A0 = 841;

    printf("Paper size A0: %d mm x %d mm\n", width_A0, height_A0);

    int width_A1 = height_A0 / 2;
    int height_A1 = width_A0;
    printf("Paper size A1: %d mm x %d mm\n", width_A1, height_A1);

    int width_A2 = height_A1 / 2;
    int height_A2 = width_A1;
    printf("Paper size A2: %d mm x %d mm\n", width_A2, height_A2);

    int width_A3 = height_A2 / 2;
    int height_A3 = width_A2;
    printf("Paper size A3: %d mm x %d mm\n", width_A3, height_A3);

    int width_A4 = height_A3 / 2;
    int height_A4 = width_A3;
    printf("Paper size A4: %d mm x %d mm\n", width_A4, height_A4);

    int width_A5 = height_A4 / 2;
    int height_A5 = width_A4;
    printf("Paper size A5: %d mm x %d mm\n", width_A5, height_A5);

    int width_A6 = height_A5 / 2;
    int height_A6 = width_A5;
    printf("Paper size A6: %d mm x %d mm\n", width_A6, height_A6);

    int width_A7 = height_A6 / 2;
    int height_A7 = width_A6;
    printf("Paper size A7: %d mm x %d mm\n", width_A7, height_A7);

    int width_A8 = height_A7 / 2;
    int height_A8 = width_A7;
    printf("Paper size A8: %d mm x %d mm\n", width_A8, height_A8);

    return 0;
}
