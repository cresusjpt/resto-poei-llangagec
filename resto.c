//
// Created by Administrator on 3/13/2023.
//

#include <stdlib.h>
#include "resto.h"
#include "utils.h"
#include "chaine.h"

Chaine *myChaine;


Resto creerResto(char *nom, char *adresse){
    Resto r = {.adresse = adresse, .nom = nom, .nombreTable=0};
    return r;
}

void ajouterTable(Resto *resto, Table table){
    resto->tablesRestoo = (Table *) ajout(resto->tablesRestoo, resto->nombreTable);

    *(resto->tablesRestoo + resto->nombreTable) = table;
    resto->nombreTable ++;
}

void supprimer(Resto *resto, Table table){

}

Resto chercher(char *nomResto){
    for (int i = 0; i < myChaine->nombreResto; ++i) {
        if(myChaine->restoChaine[i].nom == nomResto)
            return myChaine->restoChaine[i];
    }
}

int* disponibilite(char *nomResto){
    Resto resto = chercher(nomResto);
    int taille = 1;
    int *ret = (int *) calloc(taille, sizeof(int));
    int pos = 0;

    for (int i = 0; i < resto.nombreTable; ++i) {
        Table table = resto.tablesRestoo[i];
        if(table.free){
            ret = (int *) realloc(ret, taille *  sizeof(int));
            ret[pos] = table.identifiant;
            taille++;
            pos++;
        }
    }

    return ret;
}

void ajouterResa(Resto *resto,Resa resa){
    resto->listResa = (Resto*) ajout(resto->listResa, resto->nombreResa);

    *(resto->listResa + resto->nombreResa) = resa;
    resto->nombreResa ++;
}

bool restoReserve(char *nomResto, Client client, DateTime dateTime){

    int tableAReserver = disponibilite(nomResto)[0];
    if (disponibilite(nomResto) != NULL){
        Table table = {.identifiant = tableAReserver, .free=false};
        Resto resto = chercher(nomResto);

        Resa reservation = {
                .resto = resto,
                .client = client,
                .date = dateTime,
                .table = table
        };

        ajouterResa(&resto, reservation);
        return true;
    }

    return false;
}
