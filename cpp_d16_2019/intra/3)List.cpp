/*
Another collection that can be found in the STL is std::list.
This is an implementation of a doubly-linked list.
Its interface and usage are a lot like those of vector.
However, unlike vector, you can't access an element directly by its index,
as that would mean having to iterate over the entire list just to access that element.
In C, lists are a very common container because of their flexibility.
However, you should refrain from using them in C++.
Vectors are just as flexible as lists,
and will give you much better performance
when iterating over the elements in the collection.
The only case where a list is more interesting than a vector
is when you frequently want to insert elements
in the middle of your collection.
However, that being a very rare case,
stick to vector whenever possible.
*/

#include <iostream>
#include <list>

int main()
{
    std::list<int> l;
    l.push_back(42);
    std::cout << l.front() << std::endl;
}