//
//  main.c
//  variable
//
//  Created by Frederic Louly on 28/01/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int choixMenu = 0;
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n\n");
    
    printf("Votre choix ? ");
    scanf("%d",&choixMenu);
    
    switch (choixMenu)
    {
        case 1:
            printf("tu as choisi le Royal Cheese\n\n");
            break;
            
        case 2:
            printf("tu as choisi le Mac Deluxe\n\n");
            break;

            
        case 3:
            printf("tu as choisi le Mac Bacon\n\n");
            break;

            
        case 4:
            printf("tu as choisi le Big Mac\n\n");
            break;
        
        default:
            printf("you must choose\n\n");
            break;
    }
    
    
    
    return 0;
}

