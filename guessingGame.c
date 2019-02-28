#include <stdio.h>

int main() {

    // Print header our game
    printf("*********************************\n");
    printf("* Wellcome to ours Gessing Game *\n");
    printf("*********************************\n");

    int secretNumber = 42;

    int userGuess;

    for(int i = 1 ;  i <=3 ; i++){
        printf("You have %d of 3 times \n", i);
        printf("What's your guess? ");
        scanf("%d", &userGuess); 
        printf("You guess are %d \n", userGuess);

        if(secretNumber == userGuess) {
            printf("Congratulation! You hit the answer! \n");
        } else {

            int smaller = secretNumber > userGuess;
            if(smaller) {
                printf("You guess are smaller the answer! \n");
            } else {
                printf("You guess are bigger the answer! \n");
            }
        }   
    }

}