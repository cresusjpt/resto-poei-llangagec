//
// Created by Administrator on 3/13/2023.
//

#include "DateTime.h"
#include "table.h"
#include "client.h"
#include "plat.h"

#ifndef RESTO_RESA_H
#define RESTO_RESA_H

#endif //RESTO_RESA_H

typedef struct Reservation{
    DateTime date;
    Resto resto;
    Plat *plats;
    Table table;
    Client client;
    float addition;
} Resa;