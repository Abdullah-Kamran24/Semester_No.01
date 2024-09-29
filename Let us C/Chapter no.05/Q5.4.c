#include <stdio.h>

int main(){

int ascii_code = 0;

printf("ASCII VALUES AND THEIR EQUIVALENT CHARACTER\n");

while(ascii_code <= 255)
    {
printf("The ASCII value %d and character : %c \n", ascii_code,ascii_code);

ascii_code++;
}
return 0;
}
