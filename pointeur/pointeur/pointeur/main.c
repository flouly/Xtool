//
//  main.c
//  pointeur
//
//  Created by Frederic Louly on 13/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void decoupeMinutes(int *pointeurH, int *pointeurM);

int main(int argc, const char * argv[]) {
    
   
    int heures = 0, minutes = 90;
    
    
    decoupeMinutes(&heures, &minutes);
    
    printf("%d heures et %d minutes", heures , minutes );
    
    return 0;
}

void decoupeMinutes(int *pointeurH, int *pointeurM)
{
    *pointeurH = *pointeurM / 60;
    *pointeurM = *pointeurM % 60;
}
