//
// Created by Administrator on 3/13/2023.
//



#ifndef RESTO_RESTO_H
#define RESTO_RESTO_H
#include "client.h"
#include "table.h"
#include "resa.h"

typedef struct Resto Resto;

struct Resto{
    char *nom;
    char *adresse;
    int nombreTable;
    int nombreResa;

    Table *tablesRestoo;
    Resa *listResa;
};

Resto creerResto(char *nom, char *adresse);

//void ajouterTable(Resto *resto, Table table);

void supprimer(Resto *resto, Table table);
bool restoReserve(char *nomResto, Client client, DateTime dateTime);


#endif //RESTO_RESTO_H
