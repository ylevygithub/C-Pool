/*
Up until now, the only exception type we've used is std::exception.
However, the standard library offers several types that inherit from exception,
and can be used to be more clear about the type of error you are conveying.
Here is a list of those types.
In addition to defining these types,
the standard library actually uses them.
Have you ever wondered why we never check the return value of "new",
like we did in C with malloc?
That's because new doesn't return a null pointer when it fails.
Instead, new throws an std::bad_alloc exception.
If we wanted to recover from that error, we could do this:
Since bad_alloc inherits from std::exception,
the exception would also be caught by this catch block:
However, having a more specific exception type in our catch block
helps us only catch bad_alloc exceptions,
and any other, unexpected exception
will be transferred to the parent scope.
Another example of an exception thrown by core parts of the language
is std::bad_cast.
In this short example, I am creating a Koala
and getting a reference to it as an Animal.
I then use a dynamic_cast
to downcast that Animal reference into a Dog reference.
In the videos about casts,
we discussed how dynamic_cast could convert pointers,
and returns a null pointer if it fails.
dynamic_cast can also be used to convert references.
However, as it can't return a null reference,
it will throw an exception if it fails.
The type of exception it throws is an std::bad_cast.
*/
#include <iostream>
#include <exception>
int main(){
    try {
        int *ptr = new int;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

/*--------------------------*/
class Animal {
    public :
        virtual ~Animal() = default;
};
class Koala : public Animal {
};
class Dog : public Animal {
};

int main() {
    Koala k;
    Animal &a = k;// interpret Koala as Animal
    Dog &d = dynamic_cast<Dog &>(a);// Try to interpret Animal as Dog
}