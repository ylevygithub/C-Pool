/*
Comme pour le new qui est l equivalent d un malloc, le delete est l equivalent d un free.
Malloc doesnt call constructors when creating object on the heap.
To solve this problem, the C++ “new” keyword should be used instead.
Similarly, free doesn’t call destructors.
Another keyword has been introduced,
and should be used in collaboration with new.
This keyword is called delete, and should be used like this:
The syntax is similar to that of new, and is very simple.
Remember to use new and delete instead of malloc and free when writing C++ code:
they are more feature-complete and extensible,
as you will discover in future videos. */

#include <iostream>

class MyObject {
    public:
        MyObject() { std::cout << "Constructor" << std::endl; }//part 1
        ~MyObject() { std::cout << "Destructor" << std::endl; }//part 1
        MyObject(std::string s) { std::cout << "Constructor : " << s << std::endl; }//part 3
};

int main() {
    MyObject *obj = new MyObject;
    delete obj;
}
