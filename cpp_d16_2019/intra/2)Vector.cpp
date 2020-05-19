/*
The part of the STL that gets the most use
is probably its set of collections.
These are pre-implemented, generic types
that let you store objects of a given type.
Several collections are available:
static arrays, dynamically allocated arrays,
linked lists, doubly linked lists, maps...
All these options are great.
However, when you initially want to use a container
and have no reason to use one or the other,
your go-to container should be vector.
A vector is a dynamically allocated array.
To create a vector, simply use the "vector" class from the std namespace.
The "std" namespace is used by all classes in the STL.
As you can see from this example,
vector takes a template parameter that indicates the type that will be held in the array.
Vector's default constructor creates an empty array.
To add elements, the "push_back" function is available:
To access the elements in a vector,
an overload for the square brackets operator is available,
meaning I can use the following syntax:
The memory allocated for a vector is automatically managed:
if you add elements to the vector and there is not enough memory for them,
it will automatically allocate more memory.
The main advantage of a vector compared to other containers,
such as lists,
is that the underlying memory is contiguous:
elements are next to each other in memory,
meaning accessing the next element is a simple pointer increment.
To avoid the cost of allocating and moving memory around when calling push_back,
vectors perform single, large allocations when needed
so that they have a large amount of memory to work with.
Take the time to read the cppreference page for vector,
and take a look at the various functions its interface offers.
You'll be getting to know vectors very well during your time working with C++!
*/

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
    v.push_back(42);
    std::cout << v[0] << std::endl;
}
