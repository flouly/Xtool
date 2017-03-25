//
//  main.c
//  essai
//
//  Created by Frederic Louly on 18/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
 
    int nombreAmis = 0, i = 0;
    int* ageAmis = NULL;
    
    printf("combien avez vous d'amis ? ");
    scanf("%d", &nombreAmis);
    
    if (nombreAmis > 0)
    {
    ageAmis = malloc(nombreAmis * sizeof(int));
        
        if (ageAmis == NULL)
        {
            exit(0);
        }
        for (i = 0; i < nombreAmis; i++)
        {
            printf("what's the age of your friend%d ?", i+1);
            scanf("%d", &ageAmis[i]);
        }
        
        
        
    }
    
    return 0;
}
