/*
As you now know, the C++ standard library provides a set of types
inheriting from std::exception.
However, there are times when you need to create your own types of exceptions.
When doing so, it is important to inherit from std::exception,
as it is the only way for client code to be able to catch your exceptions
without knowing their type.
The standard exception type defines a virtual "what" function
that returns a string explaining what happened.
By creating a custom exception type, we may override that function:
The what function must be noexcept,
as users shouldn't expect an exception to throw another one.
Here, we've simply returned a hardcoded string.
To make things a little more customizable,
let's add a constructor that lets users specify the what message.
The constructor, just like the what function,
must be noexcept, to prevent exceptions from being thrown by other exceptions.
This was a very simple and uninteresting example.
However, it can sometimes be a real asset to define your own exception types,
when you want to add more information to your exceptions
(such as references to the objects that caused the exception, for instance).
*/
#include <exception>
#include <iostream>

class MyException : public std::exception
{
    public :
        MyException(const std::string &msg) noexcept
            : _msg(msg) {}
    public :
        const char *what() const noexcept override { return _msg.data(); }
    private :
        std::string _msg;
};
