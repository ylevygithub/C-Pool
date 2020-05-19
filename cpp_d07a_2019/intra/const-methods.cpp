/*
Let’s create a Zoo class, that will hold a certain number of animals:
This all works as expected.
Let’s now try to make our Zoo const:
This doesn’t compile.
When you think about it, it’s pretty normal:
we can’t add an animal to our const Zoo,
that would modify it!
Let’s remove that line of code.
Strange, this still doesn’t compile,
even though our getAnimals function doesn’t modify our object.
To make this compile, we have to use another feature of C++:
const methods.
To let users call a member function on a const object,
we need to specify it in our class definition.
Here’s how:
As you can see, I’ve simply added a “const” to the function’s prototype.
We can now compile and run, and it all works as expected.
Here, my function was declared inline.
However, most of the time you’ll be writing the function code in a separate source file.
In that case, you also have to add const to the prototype in the definition, like this:
In a const member function,
"this” will not be a pointer to an object,
but instead a pointer to a const object.
*/

#include <iostream>

// class Zoo {
//     public:
//         Zoo()
//             : _animals(0)
//         {}
//         void addAnimal() { ++_animals; }
//         std::size_t getAnimals() { return (_animals); }

//     private:
//         std::size_t _animals;
// };

// int main() {//part 1
//     Zoo z;

//     z.addAnimal();
//     std::cout << z.getAnimals() << std::endl;
// }
// //output = 1

// int main() {//part 2
//     const Zoo z;

//     z.addAnimal();
//     std::cout << z.getAnimals() << std::endl;
// }
//output = doesnt compile.


//we need to specify it in the class
//si on ajoute un const dans la class entre getAnimals() et {return (_animals);}
// et quon enleve dans le main la ligne z.addAnimals();
//on obtient a l output 0

//en regle general on fera plutot comme ca :

class Zoo {
    public:
        Zoo()
            : _animals(0)
        {}
        void addAnimal() { ++_animals; }
        std::size_t getAnimals() const;

    private:
        std::size_t _animals;
};

std::size_t Zoo::getAnimals() const { return (_animals);}

int main() {//part 2
    const Zoo z;

    std::cout << z.getAnimals() << std::endl;
}
//output = 0
//this ne pointera plus sur un objet mais plutot sur un const objet.