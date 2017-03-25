//
//  main.c
//  pendu
//
//  Created by Frederic Louly on 18/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pendu.h"


char lirechar();
int gagne(int lettreTrouve[]);
int rechercheLettre(char maLettre, char motSecret[], int lettreTrouve[]);

int main(int argc, const char * argv[])
{
    char motSecret[100] = {0};
    int *lettreTrouve = NULL;
    char maLettre = 0;
    int nbCoups = NOMBRE_DE_COUPS;
    int i = 0;
    int tailleMot = 0;
    
    if(!piocherMot(motSecret))
       exit(0);
           
    tailleMot = strlengh(motSecret);
    
    lettreTrouve = malloc(tailleMot * sizeof(int));
    if(lettreTrouve == NULL)
     exit(0);
    
    for(i = 0; i < tailleMot; i++)
        lettreTrouve[i] = 0;
    
    printf("Bienvenue dans le Pendu !\n\n");
    
    
    while(nbCoups > 0 && !gagne(lettreTrouve))
    {
            
        printf("\n\nIl vous reste %d coups", nbCoups);
        
        printf("Quel est le mot secret ? ");
    
        for(i = 0; i < tailleMot; i++)
        {
            if(lettreTrouve[i])
                printf("%c", motSecret[i]);
            else
                printf("*");
        }
        
        
        printf("\nVotre lettre : ");
        maLettre = lirechar();
    
    
        if(!rechercheLettre(maLettre, motSecret, lettreTrouve))
        
            nbCoups--;
        
    }
           
           
    if(gagne(lettreTrouve))
           printf("\ngagne, le mot secret est %s", motSecret);
    else
           printf("\nperdu, le mot secret est %s", motSecret);
    
    free(lettreTrouve);
           
    return 0;
}


char lirechar()
{
    char caractere = 0;
    
    caractere = getchar();
    caractere = toupper(caractere);
    
    while (getchar() != '\n');
    
    return caractere;
}

int gagne(int lettreTrouve[])
{
    int i = 0;
    int joueurGagne = 1;
    int tailleMot = 0;
    
    for(i = 0; i < tailleMot; i++)
    {
        if(lettreTrouve[i] == 0)
            joueurGagne = 0;
    }
    
    return joueurGagne;
}

int rechercheLettre(char maLettre, char motSecret[], int lettreTrouve[])
{
    int i = 0;
    int bonneLettre = 0;
    
    for(i = 0; motSecret[i] != '\0'; i++)
    {
        if(maLettre == motSecret[i])
        {
            bonneLettre = 1;
            lettreTrouve[i] = 1;
        }
    }
    return bonneLettre;
}
