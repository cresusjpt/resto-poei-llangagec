//
// Created by Administrator on 3/13/2023.
//



#ifndef RESTO_TABLE_H
#define RESTO_TABLE_H

#include "resto.h"
#include <stdbool.h>

typedef struct Table Table;

struct Table{
    int identifiant;
    bool free;
};

Table creerTable(Resto *resto);

#endif //RESTO_TABLE_H



