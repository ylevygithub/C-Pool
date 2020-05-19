//
// EPITECH PROJECT, 2020
// intra cours : new
// File description:
// explication de new par l intra
//

/*
In C , heap-based memory allocation was done using the malloc function,
and memory release with the free function.

Let's try using them in C++.

I've created a class with a constructor and a destructor, and instanciated an object with that type.
If I compile and run, it all works well.
*/
#include <iostream>

class MyObject {
    public:
        MyObject() { std::cout << "Constructor" << std::endl; }//part 1
        ~MyObject() { std::cout << "Destructor" << std::endl; }//part 1
        MyObject(std::string s) { std::cout << "Constructor : " << s << std::endl; }//part 3
};

int main() {
    MyObject obj;//ce qui me donne a l output : Constructeur\nDestructeur
}

//Lets now try to store our object on the heap instead of the stack, using malloc.
//I've simply modified the code to allocate memory for my object on the heap, and then release the memory.
int main() {
    MyObject *obj = (MyObject *)malloc(sizeof(*obj));
    free(obj);
}
//If i compile and run, there is a problem. My constructer and destructer aren't called.
//The reasoon behind this is that malloc and free simply perform operations on the memory, and are not tied to the constructer/destructer system.
//To work around this problem, C++ introduces two new operators: NEW and DELETE.
//The new operator replaces malloc. It allocates memory for an object and calls its constructor.
//For instance : as you can see, the syntax is more simpler than when we used malloc.
// We simply specify the type we are creating. What if we want to pass params to our constructor ?
int main() {
    MyObject *obj = new MyObject;
    MyObject *obj2 = new MyObject("Hello");
    //ce qui nous donne a l output : Constructor\nConstructor : Hello.
}
//If i want to provide a param to the constructor of the object i am allocating, i simply add it after the type in my call to new.
