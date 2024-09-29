#include <stdio.h>

int main(){
int cost,selling,total,profit,loss;

printf("Enter your cost price: ");
scanf("%d", &cost);

printf("Enter your Selling price: ");
scanf("%d", &selling);

profit = selling - cost;
loss = cost - selling;

if(cost == selling){
    printf("The cost price : %d\nThe selling price : %d\n\t\tBOTH ARE EQUAL\n",cost,selling);
}

if(cost > selling){
        printf("The cost price : %d\nThe selling price : %d\n\t\tLOSS :%d\n",cost,selling,loss);
    }
if(selling > cost){
        printf("The cost price : %d\nThe selling price : %d\n\t\tPROFIT : %d\n",cost,selling,profit);
    }

else{
    printf("INVALID INPUT!");

}

return 0;

}
