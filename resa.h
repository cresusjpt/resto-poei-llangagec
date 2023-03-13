//
// Created by Administrator on 3/13/2023.
//




#ifndef RESTO_RESA_H
#define RESTO_RESA_H
#include "DateTime.h"
#include "resto.h"
#include "table.h"
#include "client.h"
#include "plat.h"

typedef struct Reservation Resa;

struct Reservation{
    DateTime date;
    Resto resto;
    Plat *plats;
    Table table;
    Client client;
    float addition;
};

#endif //RESTO_RESA_H

