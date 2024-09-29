#include <stdio.h>

int main(){
int red,green,blue;
float cyan,white,magenta,yellow,black;

printf("Enter the value of Red (0 - 255): ");
scanf("%d",&red);

printf("Enter the value of Green (0 - 255): ");
scanf("%d",&green);

printf("Enter the value of Blue (0 - 255): ");
scanf("%d",&blue);

if(red == 0 && blue == 0 && green == 0){
    cyan = 0;
    magenta = 0;
    yellow = 0;
    black = 0;
}

else if( (red/255.0) > (green/255.0)){
    white = red/255.0;
}

else if( (green/255.0) > (blue/255.0)){
    white = green/255.0;
}
else{
    white = blue/255.0;
    }

cyan = ( white - (red/255.0) / white);
magenta = (white - (green/255.0) / white);
yellow = (white - (blue/255.0) / white);
black = 1 - white;

printf("THE COLORS VALUES ARE FOLLOWING: \n");
printf("Cyan : %.2f\n",cyan);
printf("Magenta : %.2f\n",magenta);
printf("Yellow : %.2f\n", yellow);
printf("Black : %.2f\n",black);

return 0;
}

