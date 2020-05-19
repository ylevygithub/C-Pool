/*
When creating an object on the heap in C++, you use the new operator.
However, if you want to create an array of objects, you should use what is called “array new”.
The syntax for it is the following:
Here, I’ve created an array of 42 objects.
The syntax is, yet again, very simple.
If I now want to delete that array,
I can’t juste use delete, but should instead use “array delete”, like this:
The reason behind this is simple:
“simple” delete expects the pointer to point to a single object,
and will only call that object’s destructor.
“Array” delete, however, expects the pointer to point to an actual array,
and will therefore expect to read some metadata about the number of objects stored there,
and how many destructors it should call.
Calling “simple” delete on an array,
or “array” delete on a single object,
results in undefined behavior.
It could work as expected, it could lead to a segmentation fault, or it could cause the moon to explode.
It’s undefined!
*/
#include <iostream>

class MyObject {
    public:
        MyObject() { std::cout << "Constructor" << std::endl; }
        ~MyObject() { std::cout << "Destructor" << std::endl; }
        MyObject(std::string s) { std::cout << "Constructor : " << s << std::endl; }
};

int main() {
    MyObject *obj = new MyObject[10];
    delete [] obj;
}
