/*
• les elfes ont une table devant eux et une bande transporteuse à leurs côtés, (bande transporteuse = ConveyorBelt)
• rien ne peut être placé sur la bande transporteuse s'il y a déjà quelque chose dessus,
• les elfes peuvent mettre et prendre n'importe quel objet sur la table ou la bande transporteuse,
• lorsqu'il n'y a plus de place sur la Table, elle s'effondre.
Il peut contenir jusqu'à 10 objets,
• les elfes reçoivent des Wraps en appuyant sur le bouton «IN» du (ConveyorBelt = tapis roulant) à l'aide de leur (Hand=main),
• les elfes envoient le contenu de la ConveyorBelt au (Santa=Père Noël) en appuyant sur son bouton OUT,
• un Wrap envoyé au (Santa=Père Noël) disparaît, ce qui signifie qu'il y a de nouveau de l'espace sur le ConveyorBelt,
• les elfes peuvent regarder le (Table=tableau) pour voir ce qu'il y a dessus. En retour, ils obtiennent une (array=liste) des titres des différents
Objets. Le dernier élément de la (liste=array) est null,
• appuyer sur un bouton de la bande transporteuse lorsque l'entrée / sortie n'a pas encore été initialisée est une erreur.


Le chef de projet insiste sur le fait que vous devez écrire les interfaces ITable et IConveyorBelt, ainsi que les class : PapaXmasTable
et PapaXmasConveyorBelt implémentant ces interfaces.
La table et la bande transporteuse du Père Noël ont tout le nécessaire pour faire 2 cadeaux. L'organisation / distribution de Wraps/Toys entre le tapis roulant et la table dépend de vous.

You must also provide the following functions:
     ITable *createTable();
    IConveyorBelt *createConveyorBelt();
Ces fonctions permettent aux clients de (instancier) les deux objets.

The error cases must generate explicit messages on the error output.
*/
#include "Wrap.hpp"

#ifndef workstation_HPP_
#define workstation_HPP_

class Elf {
    bool handFree;
};

class Table : public Elf {
    int objetNb;
    Table setTable(int);
    void put(Object *obj);
    Object *take();
};

class ConveyorBelt : public Elf {
    bool isEmpty;
    void put(Object *obj);
    Object *take();
};

#endif /*workstation_HPP_*/
