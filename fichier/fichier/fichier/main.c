//
//  main.c
//  fichier
//
//  Created by Frederic Louly on 18/02/2017.
//  Copyright © 2017 Frederic Louly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    FILE* fichier = NULL;
    
    fichier = fopen("/Users/flouly/Documents/Code/xtool/fichier/fichier/fichier/test.txt", "r+");
    
    if (fichier != NULL)
    {
        printf("open\n");
        
        putc('a', fichier);
        
        fclose(fichier);
        
    }
    else
    {
        printf("not open");
    }
    
   
    return 0;
}
