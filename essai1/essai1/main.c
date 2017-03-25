//
//  main.c
//  essai1
//
//  Created by Frederic Louly on 18/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int lire(char *chaine, int longueur);



int main(int argc, const char * argv[])
{
   
    char nom[10];
    printf("your name  ");
    lire(nom, 10);
    
    printf("name is %s\n\n", nom);


    

    
    return 0;
}





int lire(char *chaine, int longueur)
{
    char *positionEntre = NULL;
    
    positionEntre = strchr(chaine, '\n');
    
    if(fgets(chaine, longueur, stdin) != NULL)
    {
    
        if(positionEntre != NULL)
        {
        *positionEntre = '\0';
        }
        return 1;
    }
    else
    {
        return 0;
    }
    
}
