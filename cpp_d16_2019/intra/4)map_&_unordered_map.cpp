/*
Data association is something programmers have to do regularly.
For instance, you often want to map strings to function pointers,
like the printf function does for its formatting flag.
In C, mapping values is done by maintaining two separate arrays,
one with the keys and one with the values.
Another option is to create a structure with a key and a value field,
and hold a single array of those.
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names {"John", "Jack", "Bob", "Patrick"};
    std::vector<std::size_t> ages {24, 24, 21, 23};

    for (int i = 0; i < names.size(); ++i) {
        const auto &key = names[i];
        auto value = ages[i];

        std::cout << key << " is " << age << std::endl;
    }
}
/*
C++ introduces types that make this much easier: maps.
A map associates keys of a given type
(the first template parameter, as you can see in this example)
to values of another type
(the second template parameter).
To access a value, you can simply use the square brackets operator
with the key.
As you can see, this is much simpler than anything you could do in C.
Maps are nice, but they can sometimes be slow:
the underlying data structure is a red-black tree.
This means that whenever you add a new key-value pair to the map,
it has to re-structure its binary tree to keep it balanced.
*/
#include <map>

int main()
{
    std::map<std::string, std::size_t> ages;

    ages["John"] = 24;
    ages["Jack"] = 24;
    ages["Bob"] = 21;
    ages["Patrick"] = 23;

    std::cout << ages["Bob"] << std::endl;   
}

/*
To avoid the cost of keeping a tree balanced
and doing a lookup in a sometimes very large binary tree,
another type of map is available: unordered_map.
As you can see, the usage is exactly the same.
However, using unordered_maps can lead to great performance improvements.
As its name suggests, unordered_map does not keep its elements in any specific order.
Instead, it uses a technique called hashing
to generate a unique identifier for each key.
Then, it can (to make things simple)
use that identifier as an index in an array.
This means you get constant time lookup and insertion,
no matter how large the map is.
unordered_map should be your go-to container
when you want to map keys to values in C++.
*/
#include <unorderedmap>

int main()
{
    std::unordered_map<std::string, std::size_t> ages;

    ages["John"] = 24;
    ages["Jack"] = 24;
    ages["Bob"] = 21;
    ages["Patrick"] = 23;

    std::cout << ages["Bob"] << std::endl;   
}
