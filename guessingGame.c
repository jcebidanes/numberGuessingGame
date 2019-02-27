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

}