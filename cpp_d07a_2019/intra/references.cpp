/*
In C, when passing a structure to a function,
you would typically pass it as a pointer.
The reason behind this is that structures are generally large pieces of memory,
and passing pointers leads to performance improvements:
instead of creating a copy of the structure,
which means taking up a large piece of memory and copying the old structure into it,
you simply use up 8 bytes.
The problem with pointers is that they can be null,
and it is never clear whether the pointer points to a single value or to an array.
C++ provides a solution to these issues: references.
By definition,
a reference is a constant, non-null, dereferenced pointer.
Here’s how you declare a reference:
The syntax is similar to that for pointers,
expect I use an ampersand instead of a star.
Additionally, I don’t explicitly take the Object’s address.
Instead, I simply indicate that my reference is equal to the object.
However, this doesn’t perform a copy.
The reference is simply another way to access the same object.
If I want to access data in the object,
I use the dot operator,
just like I would for a normal object:
If I compile and run,
you can see that even though I modified the values in ref,
the values also changed in obj.
It’s the same mechanism as for pointers,
expect I go through the dot operator instead of the arrow.
The most important thing to note is that a reference cannot be null.
This implies that when declaring a reference,
I have to initialize it.
I can’t leave it uninitialized and set it later.
This is particularly interesting for function parameters.
Let’s write the content of our functions:
We’ve already discussed why the “copyParameter” function causes performance loss.
For “pointerParameter”, the problem is more subtle.
Even though we’ve gained performance because we avoided the copy,
we’re still forced to check whether the parameter is null or not,
as users are allowed to pass null pointers to our function.
We still have the cost of a runtime check.
Let’s now write a function that takes a reference parameter:
Because references cannot be null,
we now have the best of both worlds.
We avoid a copy, and also avoid the cost of a runtime condition.
From now on, remember to always take reference parameters instead of copies for objects.
For instance, here’s a function that takes a string as parameter:
We can compile and run, it all works as expected.
One important thing to note is that our parameter is a reference to a CONSTANT string.
If we remove that const, here’s what happens:
We get an error that’s pretty clear:
we can’t bind our non-const reference to an rvalue.
To make things simple:
in this context, the “Hello world” string is a temporary object.
Temporary objects are part of a category called “rvalues”,
and rvalues cannot be modified.
Therefore, you can’t have a non-const reference to an rvalue.
That’s why it’s very important to specify that parameters are const when you don’t modify them,
as forgetting to do that will make things like this impossible.
*/

#include <iostream>

struct Object {
    int largeData[2048];
};

void copyParameter(Object obj) //Bad, copy of 2048 ints
{
}

void pointerParameter(const Object *obj) //Better, but may be null or an array
{
}

int main() {
    Object obj;
    Object &ref = obj;

    ref.largeData[0] = 42;
    std::cout << obj.largeData[0] << std::endl;
}
//output = 42
//the most important thing : a reference cannot be null.
//a reference is a const non null more exactly.
//ca veut dire que lorsque je declare une ref, je doit l initialiser.

struct Object {
    int largeData[2048];
};

void copyParameter(Object obj) //Bad, copy of 2048 ints
{
    std::cout << obj.largeData[0] << std::endl;
}

void pointerParameter(const Object *obj) //Better, but may be null or an array
{
    if (obj != NULL)
        std::cout << obj->largeData[0] << std::endl;
}

void referenceParameter(const Object &obj) {
    std::cout << obj.largeData[0] << std::endl;
}
//we still have the cost of a runtime check.
//Lets now write a function that takes a reference parameter :

//because ref cannot be null, we now have the best of both worlds.
//we avoid a copy and also avoid the cost of a runtime condition.
void debug(const std::string &str) {
    std::cout << "[" << str << "]" << std::endl;
}

int main() {
    debug ("Hello World");
}
//output = [Hello World]


//Si on enlevait le const ?
void debug(std::string &str) {//sans const
    std::cout << "[" << str << "]" << std::endl;
}

int main() {
    debug ("Hello World");
}
//la compilation marche mais l'execution ne marchera pas
//car notre parameter est une reference a une string constante.
// on recoit une ERREUR : we cant bind our non-const reference to an rvalue.
// notre Hello world est un objet temporaire. Les objets temporaires font partie de la categorie : "rvalues".
//et rvalues cannot be modified.
//therefore, you cannot have a non-const reference to an rvalue. C pourquoi c tres important de bien specifier que
//notre parametre est bien un const lorsquon n a pas l intention de le modifier.