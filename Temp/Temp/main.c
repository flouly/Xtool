//
//  main.c
//  Temp
//
//  Created by Frederic Louly on 02/03/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>

int lire(char *chaine, int longueur);
void viderBuffer();


int main(int argc, const char * argv[])
{

    char nom[10];
    
    printf("Quel est votre nom ? ");
    lire(nom, 10);
    printf("Ah ! Vous vous appelez donc %s !\n\n", nom);
    
    
    
    return 0;
}


void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;
    
    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        return 1;
    }
    else
    {
        viderBuffer();
        return 0;
    }
}
