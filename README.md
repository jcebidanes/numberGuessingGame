# Number Guessing Game
This is a simple Guessing Game to training C Language 

## Starting on C

This time we will only print text on screen.
After create file program.c write de code below.

    #include <stdio.h>

    int main() {
        printf("Wellcome to ours Gessing Game");
    }

Now we will compile this code using the **gcc** compiler.

    $ gcc program.c -o program.out

If list our directory we will see new file *program.out*. To test with work this program we will run using command.

    $ ./program.out

Result will be 

    Wellcome to ours Gessing Game

## Doing adjusts on this program

Primary we will rename file because *program.c* don't means nothing. We will rename to **gessingGame.c**. Now it's much better.

Other change is put *"ENTER"* on end the message and to doing this is really easer,  only add **\n** on final each messagem like code below.

    printf("Wellcome to ours Gessing Game \n");

To improve a litte bit the exibition message we change our code like below. Notice that we put a code before first *printf* command. This code means comment. Don't doing nothin to program, but it's useful for programer remember what this part of code do.

    // Print header our game
    printf("*********************************\n");
    printf("* Wellcome to ours Gessing Game *\n");
    printf("*********************************\n");