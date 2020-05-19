/*
As you now know, your compiler will automatically generate a default constructor,
copy constructor and assignment operator if you don't declare them.
Here's a little class you should be familiar with by now:
a basic smart pointer, which acquires a pointer and deletes it in its constructor.
If I compile and run, it all works fine.
*/

#include <iostream>

class Koala {
};

class Ptr {
    public:
        Ptr(Koala *obj) : _ptr(obj) {}
        ~Ptr() { delete _ptr; }
    private:
        Koala *_ptr;
};

int main() {
    Ptr ptr(new Koala);
}

/*
Let's now try copying our smart pointer,
using the automatically generated copy constructor:
If I now compile and run, I get a runtime error.
This is because my pointer gets deleted twice,
which leads to a "double free or corruption" error.
*/
class Koala {
};

class Ptr {
    public:
        Ptr(Koala *obj) : _ptr(obj) {}
        ~Ptr() { delete _ptr; }
    private:
        Koala *_ptr;
};

int main() {
    Ptr ptr(new Koala);
    Ptr copy(ptr); //compilation : runtime error. my pointer gets deleted twice.
}

/*
There are two ways of solving this issue.
The first is to have our smart pointer perform "deep copy",
as in create a pointer to a new Koala that is a copy of the original.
However, this might not be what the user expects:
he just wants two smart pointers to the same object.
The other option is to make our Ptr object non-copyable.
To do this, we can simply indicate that we don't want the compiler
to generate our copy constructor and assignment operator, like so:
By using the delete specifier,
I am indicating to my compiler that these functions should not be generated.
If I now try to compile, I get an explicit error message
telling me I can't copy my object.
*/

class Koala {
};

class Ptr {
    public:
        Ptr(Koala *obj) : _ptr(obj) {}
        ~Ptr() { delete _ptr; }

        Ptr(const Ptr &) = delete;//First option
        Ptr &operator=(const Ptr &) = delete;//Second option
    private:
        Koala *_ptr;
};

int main() {
    Ptr ptr(new Koala);
    Ptr copy(ptr);
}
/*
Much in the same manner,
I can explicitly force the compiler to generate these functions.
This is useful as they will only be generated if none of them are declared,
meaning that if I define special operations for my copy constructor,
my assignment operator won't be generated.
Remember to use these specifiers whenever you need them,
as they will help you write self-documenting code.
*/

class Koala {
};

class Ptr {
    public:
        Ptr(Koala *obj) : _ptr(obj) {}
        ~Ptr() { delete _ptr; }

        Ptr(const Ptr &) = default;
        Ptr &operator=(const Ptr &) = default;
    private:
        Koala *_ptr;
};

int main() {
    Ptr ptr(new Koala);
    Ptr copy(ptr);
}
