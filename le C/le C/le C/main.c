//
//  main.c
//  le C
//
//  Created by Frederic Louly on 10/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Player must choose a level for the game

int level()
{
    int choice = 0;
    
    printf("=== Level ===\n\n");
    printf("1. Beginner\n");
    printf("2. Confirm\n");
    printf("3. Expert\n");
    
    printf("Choose a level: ");
    scanf("%d", &choice);
    
    while (choice < 1 || choice > 3)
    {
        printf("Your input is wrong\n\n");
        printf("Choose a level: ");
        scanf("%d", &choice);
    }
    
    return choice;
    
}

//Give a random number for a given maximum number

int guess(int maxNumber)
{
    const int MIN = 1;
    srand((unsigned int)time(NULL));
    
    return (rand() % (maxNumber - MIN + 1)) + MIN;
}

int main(int argc, const char * argv[])
{
    
    int continueGame = 1;
    
    while ( continueGame == 1)
    {
    
        int mysteryNumber = 0, inputNumber = 0, meter = 0;
        
        printf("\n\n");
        
        switch (level())
        {
            case 1:
                mysteryNumber = guess(100);
                printf("give a number between 1 and 100: ");
                break;
                
            case 2:
                mysteryNumber = guess(1000);
                printf("give a number between 1 and 1000: ");
                break;
                
            case 3:
                mysteryNumber = guess(10000);
                printf("give a number between 1 and 10000: ");
                break;
        }
        
        
        do
        {
        // player guess a number
        
            
            scanf("%d", &inputNumber);
            meter++;

            if (inputNumber > mysteryNumber)
            {
                printf("Your guess is too high\n\n");
            
            }
            else if (inputNumber < mysteryNumber)
            {
                printf("Your guess is too low\n\n");
            }
            else
            {
                printf("Yes you found the right number in %d time\n", meter);
                printf("Do you want to play again ? (1 for yes, 0 for no): ");
                scanf("%d", &continueGame);
            }
        }while (inputNumber != mysteryNumber);

        printf("\n\n");
    }
    return 0;
}
