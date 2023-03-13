#include <stdio.h>
#include "chaine.h"

int main() {

    Chaine chaine = creerChaine("Buger de Papa");

    Resto resto1 = creerResto("Burger de Papa Nantes", "3 rue Emile Masson");
    ajoutResto(&chaine,resto1);


    //creation de dix table dans le restaurant
    for (int i = 0; i < 10; ++i) {
        ajouterTable(&resto1);
    }

    Personne personne1 = {"Tossou","Jp"};
    Client client1 = creerClient(personne1,"06 67 45 89 67");

    DateTime tomorrow = {2023,03,14, 21,00};
    reserver(client1,"Burger de Papa Nantes", tomorrow) ? printf("Reservation bien effectuee") : printf("Aucune disponibilite");


    //free()

    if(errno !=0){
        perror("resto: ");
    }

    return 0;
}
