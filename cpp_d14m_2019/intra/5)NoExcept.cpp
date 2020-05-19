/*
Now that you know about exceptions,
you might think the world is a horrible place.
You can never know whether a function might throw or not!
Thankfully, the language provides a keyword
that lets functions document whether they throw exceptions or not:
noexcept.
By declaring a function noexcept,
I can specify that it will never throw an exception.
This lets the compiler perform optimizations,
as it doesn't have to save the stack's state before calling the function.
So, what happens if I throw an exception from a noexcept function ?
If I compile and run this,
you can see that the program is terminated by the exception,
even though I had written a catch block.
That's because any exception leaving a noexcept function
immediately terminates the program.
The noexcept keyword can be used to optimize code that will never throw,
and document to your users that they don't need to write a try/catch block around your function.
*/
#include <iostream>

void func() noexcept
{
    std::cout << "Hi\n";
    throw std::runtime_error("Oh no!");
}

int main() {
    try {
        func();
    }
    catch (const std::runtime_error &) {}
}