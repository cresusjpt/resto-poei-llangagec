//
// Created by Administrator on 3/13/2023.
//

#include "client.h"

#ifndef RESTO_RESTO_H
#define RESTO_RESTO_H

#endif //RESTO_RESTO_H


typedef struct Resto{
    char *nom;
    char *adresse;
    int nombreTable;
    int nombreResa;

    Table *tablesRestoo;
    Resa *listResa;
} Resto;

Resto creerResto(char *nom, char *adresse);

void ajouterTable(Resto *resto, Table table);

void supprimer(Resto *resto, Table table);
bool restoReserve(char *nomResto, Client client, DateTime dateTime);