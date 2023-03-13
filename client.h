//
// Created by Administrator on 3/13/2023.
//

#ifndef RESTO_CLIENT_H
#define RESTO_CLIENT_H
#include "personne.h"
//#include "resa.h"
#include "client.h"
#include "DateTime.h"
#include <stdbool.h>

typedef struct Client Client;

struct Client{
    Personne pers;
    char* numero;
};

Client creerClient(Personne p, char *telephone);

bool reserver(Client client,char *nomResto, DateTime dateTime);


#endif //RESTO_CLIENT_H


