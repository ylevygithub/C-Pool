/*
The third type of cast in C++ is called reinterpret_cast.
It is the only tool in C++ that will let you cast anything into anything.
It is only applicable to pointers and references,
or for pointer to integer conversions.
As you can see, reinterpret_cast really lets you cast anything into anything.
Here, I'm telling my compiler to consider my koala as if it was an atomic bomb,
and it doesn't complain at all.
It is very rare to have to use reinterpret_cast,
and you should avoid it at all costs,
because it abuses the type system
and lets you do unspeakable things like this.
*/

#include <iostream>
#include <string>

class Koala {
};

class AtomicBomb {
};

int main()
{
    Koala k;

    AtomicBomb &b = reinterpret_cast<AtomicBomb &>(k);
}