#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("color 07");

    int random, randomNumber;

    int userChoice;

    int userWin, compWin;

    userWin = 0; compWin = 0;


    srand(time(NULL));   // Initialization, should only be called once.

    do {

    random = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.

    randomNumber = random % 6; //random number from 0 to 5

    if(randomNumber == 0) {
        randomNumber = 6; //if the number is 0 make randomNumber = 6, because the dice cant have number 0
    }

    printf("\n *** Game Roll And Dice by Kalo ***\n\n");

    printf("     Enter number from 1 - 6: ");

    scanf("%d", &userChoice);

    printf("\033[1;33m"); // Yellow

    printf("\n");

    if(userChoice < 1 || userChoice > 6) {

        if(userChoice == 0) {

        printf("Goodbye!");

        } else {

        printf("     This is not a number from 1 to 6.");

        }
    } else {

       if(userChoice == randomNumber) {

        printf("\n\n     You win! \n\n     Your number = %d\n\n     dice number =: %d", userChoice, randomNumber);

        userWin++;

       }
       else {

        printf("\n\n     You lose! \n\n     Your number = %d\n\n     Dice number = %d", userChoice, randomNumber);

        compWin++;
       }
    }
    printf("\n\n");

    printf("     Your wins: %d | Computer wins: %d", userWin, compWin);

    printf("\n\n\n");

    printf("\033[0m"); //white

    } while(userChoice != 0);


    printf("\n\n\n");
    return 0;
}
