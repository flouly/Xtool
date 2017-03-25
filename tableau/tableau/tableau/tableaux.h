//
//  tableaux.h
//  tableau
//
//  Created by Frederic Louly on 13/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#ifndef tableaux_h
#define tableaux_h

#include <stdio.h>

#endif /* tableaux_h */

void affiche(int *tableau, int tailleTableau );

int sommeTableau(int tableau[], int tailleTableau);

double moyenneTableau(int tableau[], int tailleTableau);

void copierTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau);

void maximumTableau(int tableau[], int tailleTableau, int valeurMax);

void ordonnerTableau(int tableau[], int tailleTableau);
