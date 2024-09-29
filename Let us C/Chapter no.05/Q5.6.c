#include <stdio.h>

int main(){

int orignal,matchstick,user,computer;
matchstick = 21;

printf("WELCOME TO THE MATCHSTICK GAME\n");
printf("Picked up matchsticks from (1 to 4)\nWhomever picked last matchstick that lose the game\n");
while(matchstick > 1){
    printf("\nRemaining Matchsticks: %d\n",matchstick);
    printf("Your turn:");
    scanf("%d",&user);

    if(user < 1 || user > 4 || user > matchstick){
            printf("INVALID picked up of match sticks\n");
            continue;
}
    matchstick = matchstick - user;
    printf("Remaining Matchsticks: %d\n",matchstick);

    computer = 5 - user;
    printf("Computer picks : %d\n",computer);

    matchstick = matchstick - computer ;
}
printf("You picked up last matchstick, you loses the game!\n");
return 0;
}
