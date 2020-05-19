/*
The last cast introduced in C++ is the const_cast.
const_cast is the only cast that will let you remove a cv-qualifier
(const or volatile)
from a variable.
Here's a little example:
Here, my function takes a reference to a constant string,
but then uses const_cast to modify it.
If I compile and run, you can see the string has indeed changed.
*/

#include <iostream>
#include <string>

void func(const std::string &str)
{
    std::string &nonConst = const_cast<std::string &>(str);
    nonConst = "Haha, you changed!";
}

int main()
{
    std::string str = "Don't touch me!";
    func(str);
    std::cout << str << std::endl;
}

/*
I'm sure you can appreciate everything that's wrong with this idea:
my function prototype is telling people
"don't worry, I won't modify your variables!",
but then it actually does.
You should never use a const_cast,
as it breaks encapsulation and will lead to code that is not self-documenting:
if you want to modify something, don't take it as a const!
If you're still not convinced, look at this example:
Here, I'm removing the const from my int to modify it.
If I compile and run, my program should print 42.
As you can see, it actually still prints 0.
That's because removing the const from a variable that was initially declared const
leads to undefined behavior.
My compiler, seeing that a was declared const,
replaces all usages of a by 0.
Now you know about const_cast.
Try to forget about it.
You should never have to use it.
*/

int main()
{
    const int a = 0;

    int &b = const_cast<int &>(a);
    b = 42;
    std::cout << a << std::endl;
}