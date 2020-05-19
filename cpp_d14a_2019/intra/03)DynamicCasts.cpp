/*
The second type of casts in C++ is the dynamic_cast.
The only purpose of dynamic_cast is to downcast with a runtime coherency test.
In our example from the last video,
we were downcasting our Animal pointer
into a Koala pointer using a static_cast.
We can compile and run, and everything works as expected
because our Animal pointer did indeed point to a Koala.
But what if it pointed to something else?
Let's create a Dog class, and have our Animal pointer point to a Dog.
If we try to compile,
we don't get an error as static_cast forces the downcast.
But this could lead to horrible runtime errors!
What if we tried to access data from our Koala,
even though it's actually a Dog?
Let's try it:
If we run this program with valgrind,
we can see that we're performing an invalid read operation.
That's because the "hungry" field of our Koala doesn't exist here,
since our object is only a Dog!
*/

#include <iostream>
#include <string>

class Animal {
};

class Koala : public Animal{
    public :
        int eucalyptus;
        bool hungry;
};

class Dog : public Animal {
};

int main ()
{
    Animal *a = new Dog;
    Koala *k = static_cast<Koala *>(a);

    if (k->hungry)
        std::cout << "Our koala is hungry\n";
    return(0);
}
/*
dynamic_cast offers a solution to "blind" downcasting,
by checking at runtime that we're converting to the right type.
If the type is wrong, dynamic_cast will return a null pointer.
Let's try it:
To do this check, dynamic_cast uses something called RTTI:
Run Time Type Information.
RTTI only exists in classes that contain at least one virtual method,
so you won't be able to use dynamic_cast on classes that have no virtual members.
If we compile and run this, you can see the dynamic_cast returned null,
because we weren't pointing to the right type.
One last thing to note is that a dynamic_cast is a rather slow operation.
You should avoid using it when at all possible,
and prefer other techniques for checking an object's type
if you're in an environment that requires optimal performance
(which is what C++ is for in the first place).
*/

class Animal {
    public :
        virtual ~Animal() = default;
};


int main ()
{
    Animal *a = new Dog;
    Koala *k = dynamic_cast<Koala *>(a);

    if (!k) {
        std::cout << "This isnt a Koala\n";
        return (1);
    }
    if (k->hungry)
        std::cout << "Our koala is hungry\n";
    return(0);
}
