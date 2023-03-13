//
// Created by Administrator on 3/13/2023.
//

#include "personne.h"
#include "resa.h"

#ifndef RESTO_CLIENT_H
#define RESTO_CLIENT_H

#endif //RESTO_CLIENT_H

typedef struct Client{
    Personne pers;
    char* numero;
}Client;

Client creerClient(Personne p, char *telephone);

bool reserver(Client client,char *nomResto, DateTime dateTime);
