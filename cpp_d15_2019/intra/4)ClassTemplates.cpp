/*
In C, it is possible to create generic types by using tricks based on void pointers.
In C++ however, templates allow us to create much more powerful and type-safe generic code.
When creating a generic type, what we really want is something like this:
Where T would be automatically replaced
by the type we are using the list with.
Doesn't this look a lot like function templates?
Well, you can, by simply doing this:
This creates a class template.
Just like for function templates,
the code for the class isn't actually generated until you use it,
so class templates should be defined entirely in header files.
The syntax to use our class template is the same as for function templates:
We now have a type-safe list:
the data will always be an int,
and there can be no misunderstanding about it.
Another advantage to this is performance:
we're not dereferencing a pointer whenever we want to access the data anymore.
Instead, it's stored right in the list,
and requires no further memory allocation.
*/
#include <iostream>
#include <string>

template<typename T>
class List
{
    T data;
    List *next;
};

int main ()
{
    List<int> l;
    l.data = 42;
    l.next = nullptr;
}