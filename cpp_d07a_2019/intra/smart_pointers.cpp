/*
Consider a function in which we allocate memory for a pointer,
and want to delete it when exiting the function.
If the function returns before we reach our delete expression,
we have a memory leak.
To avoid this, we explicitly delete the object for each return expression:
Can you see what's wrong with this code?
I had to write my delete statement twice.
If I had three return points in my function,
or if I had more than one object to delete,
this would quickly get out of hand.
To avoid this problem,
I'm going to use C++'s support for destructors
to automatically manage my objects' lifetimes.
As you now know,
destructors are called automatically when objects go out of scope.
Since we want our pointers to be deleted when we leave the current scope,
we can use that mechanism and create objects that will delete our pointers automatically.
To do this, let's create a nested "KoalaPtr" class.
KoalaPtr will be what we call a "smart pointer":
an object that we can use instead of our pointer,
but that manages the pointed object automatically,
so that we can reduce our main function to this.
Instead of explicitly calling delete,
it will be called automatically by our smart pointers' destructors.
Let's now implement the KoalaPtr class.
Our KoalaPtr class will hold a pointer to a Koala,
which will be the managed object.
For now, let's simply add a constructor that takes that pointer,
and a destructor that deletes it.
Finally, let's add a "get" function that lets users access the managed object.
If we now compile and run our simple main,
you can see it executes as expected.
Our smart pointer class, although very basic, works like a charm:
it acquires a pointer, and automatically releases it when it's destroyed.
If you've ever had to resources yourself in C,
trying to remember when it's OK to free memory or to close a file descriptor for example,
this should come as great news to you.
Using C++'s automatic object lifetime management,
you never have to think twice about how to manage your resources again.
Instead, simply create objects that will manage those resources for you automatically.
This idiom is called RAII,
which stands for "Resource Acquisition Is Initialization":
your objects acquire their resources in their constructors,
and then automatically release them in their destructors.
*/

#include <memory>
#include <iostream>

class Koala {
    public:
        Koala() { std::cout << "Kreog!" << std::endl; }
        ~Koala() { std::cout << "Goerk!" << std::endl; }
};
class KoalaPtr {
    private:
        Koala *_obj;
    public:
        KoalaPtr(Koala *obj):_obj(obj) { }
        ~KoalaPtr() { delete _obj; }
};

// int main(int ac, char **) {// part 1
//     auto k = new Koala;
//     auto k2 = new Koala;
//     auto k3 = new Koala;

//     if (ac == 0) {
//         delete k;
//         delete k2;
//         delete k3;
//         return (1);
//     }

//     delete k;
//     delete k2;
//     delete k3;
//     return (0);
// }

int main(int ac, char **) {// part 2
    KoalaPtr k = new Koala;
    KoalaPtr k2 = new Koala;
    KoalaPtr k3 = new Koala;

    if (ac == 0)
        return (1);
    return (0);
}
