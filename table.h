//
// Created by Administrator on 3/13/2023.
//

#include <stdbool.h>
#include "resto.h"

#ifndef RESTO_TABLE_H
#define RESTO_TABLE_H

#endif //RESTO_TABLE_H
typedef struct Table Table;

struct Table{
    int identifiant;
    bool free;
};

Table ajouterTable(Resto *resto);
