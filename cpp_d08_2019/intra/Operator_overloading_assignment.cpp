/*
In this video, we'll see how to overload the assignment operator,
which has a few subtleties to it.
Here, I've declared my assignment operator as returning void.
It'll just modify the age of the left-hand-side operand.
Let's now implement it:
Implementing my operator was yet again simple.
Let's test it:
If we compile and run, it all works as expected.
*/
#include <iostream>

class Koala {
    public:
        explicit Koala(std::size_t age)
            : _age(age)
        {}

    public:
        std::size_t getAge() const { return (_age); }

        Koala operator+(const Koala &rhs) const;

        void operator=(const Koala &rhs);

    private:
        std::size_t _age;
};

Koala Koala::operator+(const Koala &rhs) const
{
    return Koala(_age + rhs._age);
}

void Koala::operator=(const Koala &rhs)
{
    _age = rhs._age;
}

int main() {
    Koala flff(42);
    std::cout << flff.getAge() << std::endl;

    Koala phiste(21);

    Koala fourdr = flff + phiste;
    std::cout << fourdr.getAge() << std::endl;

    fourdr = flff;
    std::cout << fourdr.getAge() << std::endl;
}
//output = 42\n63\n42\n


/*
However, we still have a problem, we can't do this:
This syntax works with built-in types.
*/

int main() {
    Koala flff(42);
    std::cout << flff.getAge() << std::endl;

    Koala phiste(21);

    Koala fourdr = flff + phiste;
    std::cout << fourdr.getAge() << std::endl;

    fourdr = flff;
    std::cout << fourdr.getAge() << std::endl;

    fourdr = flff = phiste;/*  <--------------------*/
}

/*
How come it doesn't work with our Koalas?
When you look at this line closely, you can actually cut it in two:

    (fourdr = flff) = phiste;


The solution to this problem is to have our assignment operator return a reference to the object,
so that it can be used in another expression.
*/

class Koala {
    public:
        explicit Koala(std::size_t age)
            : _age(age)
        {}

    public:
        std::size_t getAge() const { return (_age); }

        Koala operator+(const Koala &rhs) const;

        Koala &operator=(const Koala &rhs);

    private:
        std::size_t _age;
};

Koala Koala::operator+(const Koala &rhs) const
{
    return Koala(_age + rhs._age);
}

Koala &Koala::operator=(const Koala &rhs)
{
    _age = rhs._age;
    return (*this);
}
//output = 42\n63\n42\n

/*
There are two more things you should know about assignment operators.
Let's imagine our class holds a pointer to allocated memory, like so:
Our constructor now allocates memory for an array of ints,
and our destructor deletes it.
Let's update our assignment operator to also copy that array.
If I compile and run, I get a runtime error.
*/

class Koala {
    public:
        explicit Koala(std::size_t age)
            : _age(age),
            _data(new int[42])
        {}

        ~Koala() { delete [] _data; }

    public:
        std::size_t getAge() const { return (_age); }

        Koala operator+(const Koala &rhs) const;

        Koala &operator=(const Koala &rhs);

    private:
        std::size_t _age;
        int *_data;
};

Koala Koala::operator+(const Koala &rhs) const
{
    return Koala(_age + rhs._age);
}

Koala &Koala::operator=(const Koala &rhs)
{
    _age = rhs._age;
    _data = rhs._data;
    return (*this);
}

/*
The problem is that by simply copying my pointer,
I now have two objects owning the same pointer.
In their destructors, both of the objects will attempt to delete it,
which leads to an error.
To solve this, we must perform what is called "deep copy".
Instead of simply using the pointer from the right-hand-side operand,
we will create a new array and copy the contents of the older one.
I can now compile and run, and everything works as expected.
*/

Koala &Koala::operator=(const Koala &rhs)
{
    _age = rhs._age;
    if (_data)
        delete [] _data;

    _data = new int[42];

    for (std::size_t i = 0; i < 42; ++i)
        _data[i] = rhs._data[i];

    return (*this);
}

/*
Let's try something fun:
What we're doing here is called self-assignment.
It may not seem very smart, and you might be thinking "I'll never do that!",
but in practice you might do it without knowing it.
If I compile and run, I'll run into memory errors.
The reason behind this is that in my assignment operator,
I delete my array before accessing the array of the other object.
But if the two objects are the same,
then that array was deleted too!
*/

int main() {
    Koala flff(42);
    std::cout << flff.getAge() << std::endl;

    Koala phiste(21);

    Koala fourdr = flff + phiste;
    std::cout << fourdr.getAge() << std::endl;

    fourdr = flff;
    std::cout << fourdr.getAge() << std::endl;

    fourdr = flff = phiste;

    fourdr = fourdr;
}
/*
To solve this issue, I must add a simple check to my function.
*/

//La suite est mise en suspense