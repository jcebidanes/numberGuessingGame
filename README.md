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

## Declare variables and interpolate *printf* and variable value.

To declare a variable you need say what type and name this variable have.

    ...
        int secretNumber = 42;
    ...

Explain the code. *int* is variable type Integer. *secretNumber* is the variable name. The = (equal mark) means assignment all value after to variable and *42* is a integer value that will be put inside variable.

Now to you print variable value together message it's needed to use interpolation like example below.

    ...
    printf(" This it's %d the secret number, don't say to anybody!\n", secretNumber );

We put **%d** inside the message and add **,**(comma) with variable name after. Our program will be switch **%d** and put value assigned to variable. In this case *42*. Result will be.

    This it's 42 the secret number, don't say to anybody!

## Getting guess number with user

To get user guess we will use **scanf** command. But fisrt we will create a new variable to keep this user guess.

    int userGuess;

    printf("What's you guess? ");
    scanf("%d", &userGuess);
    printf("You guess are $d \n", userGuess);

This code is the same we did before using *printf*. The newness is *scanf* command. Like printf we use **%d** to get what de user typed and put this value inside variable userGuess. Notice before variable name we put **&**. This will be explain after, but per hour only put this **&** before variable when to use *scanf*.

## Testing if the user answer correctly or not

This step we will use a **decesicion control statement** called *if* with *else* too.

    if( *put condicional here* ) {
        // if condicional is true
    } else {
        // if condicional is not true
    }

This code above show *if* and *else* struture. You need put a condicial sentence inside de brackets and if the result is true only the frist part will be executed, but if not true only the second part will be. We use *condicional operators* to validate condicional sentence. 

To this part we will use **==**(Double equal mark). They work testing two values are or not equals. Example:

    10 == 11   // resul -> false
    10 == 10   // resul -> true

Of course we don't use only static values. O way is to use variables and test variables values.

    int valueX = 10;
    int valyeY = 11;

    if ( valueX == valueY ) {
        printf(" X is equal Y ");
    } else {
        printf(" X not is equal Y ");
    }

---

Important: The *else* part is optional. You can use only *if* part and will work every time the condicional is true.

    if( *todayIsFriday* ) {
        printf("Happy Friday!");
    }

---

Now let's make our validation is de user hit or not our secret number.

