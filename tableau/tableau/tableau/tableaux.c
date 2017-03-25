//
//  tableaux.c
//  tableau
//
//  Created by Frederic Louly on 13/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include "tableaux.h"

void affiche(int tableau[], int tailleTableau )
{
    int i;
    
    for (i = 0; i < tailleTableau; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int i;
    int somme = 0;
    
    for (i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    
    return somme;
}


double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;
    double somme = 0;
    
    for (i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    
    return somme / tailleTableau;
}

void copierTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    
    for (i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
        
        printf("valeur original est %d, valeur copie est %d\n", tableauOriginal[i], tableauCopie[i]);
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
        int i;
        
        for (i = 0; i < tailleTableau; i++)
        {
            if (tableau[i] > valeurMax)
            {
                tableau[i] = 0;
            }
            else
            {
                tableau[i];
            }
            
            printf("La nouvelle valeur est %d\n", tableau[i]);
        }
}


void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i, temp;
    int ok = 1;
    
    while (ok != 0)
    {
        for (i = 0; i < tailleTableau; i++)
        {
                if (tableau[i] > tableau[i+1])
                {
                    temp = tableau[i];
                    tableau[i] = tableau[i+1];
                    tableau[i+1] = temp;
                    i = tailleTableau;
                    ok = 1;
                }
                else
                {
                    ok = 0;
                }
        }
    }
    
    for (i = 0; i < tailleTableau; i++)
    {
    printf("La valeur ordonnee est %d\n", tableau[i]);
    }
}
