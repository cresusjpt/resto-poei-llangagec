//
// Created by Administrator on 3/13/2023.
//

#include <stdlib.h>
#include "utils.h"
#include "resto.h"

void* ajout( void* pointeur, int taille){

    if(taille == 0)
        pointeur = calloc(1, sizeof(Resto));
    else
        pointeur = realloc(pointeur,taille * sizeof(Resto));

    return pointeur;
}