#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char you, comp;
    int result;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33){
        comp = 'r';
    }
    else if (number < 66){
        comp = 'p';
    }
    else{
        comp = 's';
    }

    printf("Enter 'r' for rock, 'p' for paper, 's' for scissor\n");
    scanf("%c", &you);
        if(you==comp){
        result = 0;
    }
    else if((you=='r' && comp=='s') || (you=='p' && comp=='r')|| (you=='s' && comp=='p')){
        result = 1;
    }
    else{
    	result = -1;
    }
    if (result == 0){
        printf("Game Drawn\n");
    }
    else if (result == 1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You chose %c and the computer chose %c\n", you, comp);
    return 0;
}