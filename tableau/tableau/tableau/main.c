//
//  main.c
//  tableau
//
//  Created by Frederic Louly on 13/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include "tableaux.h"

int main(int argc, const char * argv[])
{
    int tableau[4] = {10,15,6};
    int tableauC[4] = {0};
    
    
    affiche(tableau, 4);
    
    printf("\n\n");
    
    printf("%d\n\n", sommeTableau(tableau, 4));
    
    printf("%fl\n\n", moyenneTableau(tableau, 4));
    
    copierTableau(tableau, tableauC, 4);
    
    printf("\n\n");
    
    maximumTableau(tableau, 4, 20);
    
    printf("\n\n");
    
    ordonnerTableau(tableau, 4);
    
    printf("\n\n");
    
    return 0;
}

