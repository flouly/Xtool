//
//  Structure.h
//  sumtab
//
//  Created by Frederic Louly on 16/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#ifndef Structure_h
#define Structure_h

#include <stdio.h>

#endif /* Structure_h */

typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
};
