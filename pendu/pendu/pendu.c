//
//  pendu.c
//  pendu
//
//  Created by Frederic Louly on 18/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#include "pendu.h"

int  nbAleatoire(int nbMax)
{
    srand((unsigned int) time(NULL));
    return (rand() % nbMax);
}


int piocherMot(char *motPioche)
{
    FILE *liste = NULL;
    int carActuel = 0;
    int nbMots = 0;
    int nbMotChoisi = 0;
    

    liste = fopen("/Users/flouly/Documents/code/xtool/pendu/pendu/Liste.txt", "r+");

    if(liste == NULL)
    {
        printf("\nNot open!!");
    
        return 0;
    }
    
    do
    {
        carActuel = fgetc(liste);
        if(carActuel == '\n')
        {
        nbMots++;
        }
    
    } while(carActuel != EOF);

    
    nbMotChoisi = nbAleatoire(nbMots);
    
    rewind(liste);
    
    while (nbMotChoisi > 0)
    {
        carActuel = fgetc(liste);
        if(carActuel == '\n')
        {
            nbMotChoisi--;
        }
    }
    
    fgets(motPioche, 100, liste);
    
    
    motPioche[strlen(motPioche) - 1] = '\0';
    
    fclose(liste);

    return 1;
}



