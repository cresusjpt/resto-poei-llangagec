//
// Created by Administrator on 3/13/2023.
//

#include "client.h"

Client creerClient(Personne p, char *telephone){
    Client c = {.pers = p, .numero= telephone};

    return c;
}

bool reserver(Client client,char *nomResto, DateTime dateTime){
    return restoReserve(nomResto, client, dateTime);
}
