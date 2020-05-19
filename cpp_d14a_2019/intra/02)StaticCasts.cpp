/*
The most basic C++ cast is the static_cast.
You can see the syntax for using it in this example.
static_casts can be used to eliminate compiler warnings about implicit casts,
like in this example.
static_casts can also be used to force casts between pointers or references of compatible types,
like in this example.
The compiler won't authorize implicit conversions from Animal to Koala,
as it is a downcast,
but we can force it using a static_cast.
*/

#include <iostream>
#include <string>

class Animal {
};

class Koala {
};

int main ()
{
    double d = 42.42;
    int i = static_cast<int>(d);

//     Animal *a = new Koala;       JE LES MET EN COMMENTAIRES CAR MA RAM PÈTE SON CABLE
//     Koala *k = static_cast<Koala *>(a);
    return(0);
}