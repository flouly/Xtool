//
//  main.c
//  sumtab
//
//  Created by Frederic Louly on 13/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Structure.h"

int main(int argc, const char * argv[])
{
    Personne joueurs[2];
    int i;
    
    for (i = 0; i < 2; i++)
    {
        printf("votre nom : ");
        scanf("%s", joueurs[i].nom);
        
        printf("\n\n");
        
        printf("votre prenom : ");
        scanf("%s", joueurs[i].prenom);
        
        
        printf("\n\n");
        
        printf("bonjour joueur %s %s", joueurs[i].prenom,joueurs[i].nom);
        
        printf("\n\n");
        
    }

    
    
    return 0;
}


