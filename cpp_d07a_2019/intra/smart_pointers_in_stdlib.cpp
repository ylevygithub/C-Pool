/*
We’ve discussed the concept of smart pointers,
and implemented a simple one.
However, you're probably thinking that implementing a smart pointer for each and every class you create
is going to be a rather annoying and repetitive task.
Thankfully, the C++ standard library has just what we need:
a way to make smart pointers for any type.
To use the standard smart pointers,
I must include the memory header.
I've yet again created a simple Koala class
with a constructor, destructor, and a speak function.
Now, let's see how to create smart pointer to a Koala:
That's it.
By creating a unique_ptr to Koala using this syntax,
my pointer is now automatically managed by this object.
I can now use my pointer just like a normal pointer,
using the star and arrow operators.
If I want to access the "raw" pointer
(that is, get a version that is not automatically managed),
I can use the "get" member function on the smart pointer.
This is useful if the smart pointer is going to be owned by another object
(for instance, this pointer to Koala could be stored in a "Zoo" object),
but you need to give someone else a non-owning access to it.
Mark those last few words:
a smart pointer is an OWNING pointer.
However, you sometimes need non-owning pointers,
and those should be raw pointers.
Note that, as its name suggests, unique pointers are unique.
That means you can't have multiple unique pointers pointing to the same object,
and you can't create copies of smart pointers
(to take them as parameters, for instance).
If you ever need to do something like that
(which you probably shouldn't),
you can use a shared pointer instead.
These can be copied like normal objects,
and will only delete the pointed object when the last shared_ptr is destroyed.
This is called reference counting,
and achieves the same purpose as garbage collection,
which you might have heard of in other languages.
However, this achieves better performance than garbage collection
as objects are freed immediately when the last shared_ptr is destroyed.
Prefer unique pointers to shared ones whenever you can,
as shared pointers have a bigger performance cost because of this reference counting.
*/

#include <memory>

#include <iostream>

class Koala {
    public:
        Koala() { std::cout << "Kreog!" << std::endl; }
        ~Koala() { std::cout << "Goerk!" << std::endl; }
        void speak() {std::cout << "Kreog?" << std::endl;}
};
class KoalaPtr {
    private:
        Koala *_obj;
    public:
        KoalaPtr(Koala *obj):_obj(obj) { }
        ~KoalaPtr() { delete _obj; }
};

int main()//part 1
{
    std::unique_ptr<Koala> ptr(new Koala);
}
//a l output ca donne : Kreog!\nGoerk!\n

int main()//part 2
{
    std::unique_ptr<Koala> ptr(new Koala);
    ptr->speak();
    (*ptr).speak();
}
//output = Kreog!\nKreog?Kreog?\nGoerk!\n

int main()//part 3
{
    std::unique_ptr<Koala> ptr(new Koala);
    ptr->speak();
    (*ptr).speak();

    Koala *rawPtr = ptr.get();

    std::shared_ptr<Koala> ptr2(new Koala);//can be copied
}
