/*
Exceptions are a new way to handle errors in object-oriented programming.
Exceptions are objects that can be thrown out of a function,
and caught by its caller.
If the caller doesn't catch the exception,
it is transferred to its own caller, and so on,
until a function catches the exception.
If an exception is not caught by any function,
then it terminates the program.
Throwing an exception is rather costly in performance,
and they should therefore only be used in exceptional circumstances,
such as error cases.
Let's write a function that divides two integers:
This is all good, but what if b is equal to 0?
By default, the program will be automatically terminated, with no chance of recovery.
To fix that, let's handle the error in our code:
I've simply returned 0 if b is null.
However, this behavior is wrong:
division by zero doesn't result in zero, it's impossible.
*/

int divide(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

/*
Since this is a critical error for my function,
I'll make it throw an exception.
Here, I've used two new things:
the throw keyword, and the std::exception type.
Throw is the keyword used to throw exceptions.
std::exception is a type defined in the header,
which all exceptions inherit from.
Let's now test our function:
If I compile and run, you can see I'm met with a quite verbose error.
This is what happens when an exception is thrown and isn't caught:
the program is terminated, and the exception's error message is printed.
*/

#include <iostream>
#include <exception>

int divide(int a, int b)
{
    if (b == 0)
        throw std::exception();
    return (a / b);
}

int main()
{
    std::cout << divide(0, 0) << std::endl;
}

/*
Now, I'd like to print an error message myself if the exception is thrown.
This is a rather simple approach to error handling,
but of course in a real program I would be able to react in a more appropriate way.
To catch an exception, I have to use what's called a try/catch block.
Here's the syntax for it:
I start by writing a try block around the code that might throw.
In this example it's just a single line,
but my try block could wrap several instructions.
After my try block, I create a catch block,
and specify the type of exception I want to catch.
Inside the block, I write the code that will be executed if an exception is thrown.
If I now compile and run, we can see that my catch block is entered,
and its content is executed.
Note that throwing an exception exists the current function and/or try block.
For instance:
If I compile and run, you can see that the divide function
is exited when the exception is thrown,
as well as the end of the try block.
However, the code that follows the catch block is still executed,
as the exception is caught in main.
*/

#include <iostream>
#include <exception>

int divide(int a, int b)
{
    if (b == 0)
        throw std::exception();
    std::cout << "Not printed\n";
    return (a / b);
}

int main()
{
    try {
        std::cout << divide(0, 0) << std::endl;
    std::cout << "Not printed\n";
    }
    catch (const std::exception &e) {
        std::cerr << "Whoops!\n";
    }
    std::cout << "Printed\n";
}

/*
One last thing I can do is re-throw the exception.
If, after catching the exception,
I still want to transfer it to the calling function,
I can re-throw it using the following syntax:
By simply writing throw in my catch block,
I re-throw the current exception to the parent scope.
If I now compile and run, you can see that my catch block is entered,
but the exception still leaves my main function and exists the program.
*/

int divide(int a, int b)
{
    if (b == 0)
        throw std::exception();
    std::cout << "Not printed\n";
    return (a / b);
}

int main()
{
    try {
        std::cout << divide(0, 0) << std::endl;
    std::cout << "Not printed\n";
    }
    catch (const std::exception &e) {
        std::cerr << "Whoops!\n";
        throw;
    }
    std::cout << "Printed\n";
}
