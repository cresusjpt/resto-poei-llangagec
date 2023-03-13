//
// Created by Administrator on 3/13/2023.
//

#include "table.h"

Table creerTable(Resto *resto){
    int identifiant = resto->nombreTable;
    Table t = {.identifiant=identifiant+1, .free=false };
    resto->nombreTable++;
    return t;
}
