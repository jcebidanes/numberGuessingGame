#include <stdio.h>

int main() {

    // Print header our game
    printf("*********************************\n");
    printf("* Wellcome to ours Gessing Game *\n");
    printf("*********************************\n");

    int secretNumber = 42;

    int userGuess;

    printf("What's your guess? ");
    scanf("%d", &userGuess); 
    printf("You guess are %d \n", userGuess);

    if(secretNumber == userGuess) {
        printf("Congratulation! You hit the answer! \n");
    } else {

        if(secretNumber > userGuess) {
            printf("You hit are smaller the answer! \n");
        }

        if(secretNumber < userGuess) {
            printf("You hit are bigger the answer! \n");
        }
    }

}