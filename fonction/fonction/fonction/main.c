//
//  main.c
//  fonction
//
//  Created by Frederic Louly on 10/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>

int menu()
{
    int choice = 0;
    
    printf("=== Menu ===\n\n");
    printf("1.carrot\n");
    printf("2.tomato\n");
    printf("3.kiwi\n");
    printf("4.orange\n\n");
    
    
    printf("your choice: ");
    scanf("%d", &choice);
    
    while (choice < 1 || choice > 4)
    {
        printf(" unavailable choice\n\n");
        printf("your choice: ");
        scanf("%d", &choice);
    }
    
    return choice;
}

int main(int argc, const char * argv[])
{
    switch (menu())
    {
        case 1:
            printf("yo ca\n\n");
            break;
            
        case 2:
            printf("yo to\n\n");
            break;
            
        case 3:
            printf("yo ki\n\n");
            break;
            
        case 4:
            printf("yo or\n\n");
            break;
            
    }
    
    return 0;
}
