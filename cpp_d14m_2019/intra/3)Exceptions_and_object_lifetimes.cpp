/*
When an exception is thrown, the current scope is left.
That implies that all objects created in that scope are destroyed,
and their destructors are called.
Note that this is only applied when the exception is caught.
If I compile and run this short sample code,
you can see my object's destructor is called when the exception is thrown.
*/

#include <iostream>
#include <exception>

class Koala {
    public :
        Koala() { std::cout << "Kreog!\n";}
        ~Koala() {std::cout << "Goerk!\n";}
};

// int main()
// {
//     try {
//         Koala k; 
//         throw std::exception();
//     }
//     catch (const std::exception &) {
//     }
// }//output = Kreog\nGoerk\n
/*
If I declare another variable after the throw expression,
its constructor isn't called as the function is exited before the end of the function.
*/

// int main()
// {
//     try {
//         Koala k; 
//         throw std::exception();
//         Koala k2;
//     }
//     catch (const std::exception &) {
//     }
// }//output = Kreog\nGoerk\n
/*
In this regard, throw expressions work much like return statements.
Yet again, the constructor/destructor system,
as a core part of the language,
can be used to simplify code.
Consider a function in which we allocate memory for a pointer,
and want to delete it when exiting the function.
If an exception is thrown before we reach the end of the function,
we have a memory leak.
To avoid this, we can write a try/catch block to delete the object:
Here, I'm calling the exception's "what" function,
which can be used to access the exception's message,
and I then delete my object.
Can you see what's wrong with this code?
I had to write my delete statement twice.
If I had three try/catch blocks in my function,
or if I had more than one object to delete,
this would quickly get out of hand.
*/
// int main()
// {
//     Koala *k = new Koala;
//     Koala *k2 = new Koala;
//     Koala *k3 = new Koala;

//     try {
//         throw std::exception();//Memory leak
//         delete k;
//         delete k2;
//         delete k3;
//     }
//     catch (const std::exception &e) {
//         std::cerr << e.what << "\n";
//         delete k;
//         delete k2;
//         delete k3;
//     }
// }

/*
To avoid this problem, I'm going to use C++'s support for destructors
to automatically manage my objects' lifetimes.
As you now know, destructors are called automatically when objects go out of scope.
Since we want our pointers to be deleted when we leave the current scope,
we can use that mechanism and create objects that will delete our pointers automatically.
We've already talked about those objects in previous videos: smart pointers.
As you now know, the standard library offers a set of smart pointers
that we can use with any type, such as our Koalas:
If you've ever had to manage resources yourself in C,
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

int main()
{
    std::unique_ptr<Koala> k (new Koala);
    std::unique_ptr<Koala> k2 (new Koala);
    std::unique_ptr<Koala> k3 (new Koala);

    try {
        throw std::exception();//Memory leak
    }
    catch (const std::exception &e) {
        std::cerr << e.what << "\n";
    }
}//output =
/*
Kreog!
Kreog!
Kreog!
std::exception
Goerk!
Goerk!
Goerk!
*/